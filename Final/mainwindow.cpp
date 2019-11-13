#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    timer(new QTimer),
    httpManager(new HTTPManager),
    myModel(new ToDoList(this))
{
    ui->setupUi(this);

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setCurrentTime()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setWorldTime()));

    connect(timer, SIGNAL(timeout()),
            this, SLOT(setPhoto()));

    setPhoto();
    setCurrentTime();
    setWorldTime();
    timer->start(1000);

    ui->clockWidget->setCurrentIndex(0);

    connect(httpManager, SIGNAL(ImageReady(QPixmap *)),
            this, SLOT(processImage(QPixmap *)));

    connect(httpManager, SIGNAL(WeatherJsonReady(QJsonObject *)),
            this, SLOT(processWeatherJson(QJsonObject *)));

    ui->tableView->setModel(myModel);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setCurrentTime()
{
    QTime time = QTime::currentTime();
    QString hour = time.toString("hh");
    QString minute = time.toString("mm");
    QString second = time.toString("ss");
    int timeOfDay = hour.toInt();

    ui->hourLCD->display(hour);
    ui->minuteLCD->display(minute);
    ui->secondLCD->display(second);

    if(timeOfDay >= 6 & timeOfDay <= 11)
    {
        ui->timeLabel->setText("Welcome. Good Morning.");
    }
    else if (timeOfDay == 12)
    {
        ui->timeLabel->setText("Welcome. It's high noon.");
    }
    else if (timeOfDay >= 13 & timeOfDay <= 17)
    {
        ui->timeLabel->setText("Welcome. Good afternoon.");
    }
    else if (timeOfDay >= 18 & timeOfDay <= 23)
    {
        ui->timeLabel->setText("Welcome. Good evening.");
    }
    else
    {
        ui->timeLabel->setText("Welcome. Good night.");
    }
}

void MainWindow::setWorldTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QDateTime currentTime = time;
    int choice = ui->worldComboBox->currentIndex();
    QDateTime worldTime;
    if(choice == 0)
    {
        QTimeZone newZone("America/New_York");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 1)
    {
        QTimeZone newZone("America/Los_Angeles");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 2)
    {
        QTimeZone newZone("Asia/Dubai");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 3)
    {
        QTimeZone newZone("Asia/Seoul");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 4)
    {
        QTimeZone newZone("Asia/Bangkok");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 5)
    {
        QTimeZone newZone("Asia/Hong_Kong");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 6)
    {
        QTimeZone newZone("Asia/Shanghai");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 7)
    {
        QTimeZone newZone("Asia/Tokyo");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 8)
    {
        QTimeZone newZone("Australia/Sydney");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 9)
    {
        QTimeZone newZone("Europe/Amsterdam");
        worldTime = time.toTimeZone(newZone);
    }
    else if(choice == 10)
    {
        QTimeZone newZone( "Europe/London");
        worldTime = time.toTimeZone(newZone);
    }

    QString hour = worldTime.toString("hh");
    QString minute = worldTime.toString("mm");
    QString second = worldTime.toString("ss");
    QString day = worldTime.toString("ddd/MMM/d/yyyy");
    QString currentDay = currentTime.toString("ddd/MMM/d/yyyy\th:m:s ap");

    ui->worldHourLCD->display(hour);
    ui->worldMinuteLCD->display(minute);
    ui->worldSecondLCD->display(second);

    ui->worldTimeLabel->setText("Day at city: " + day
                                + "\nCurrent time:\n"
                                + currentDay);
}

void MainWindow::setPhoto()
{
    qsrand(static_cast<quint64>(QTime::currentTime().msecsSinceStartOfDay()));
    int photoNum = qrand() % 8;

    QString imageAddress = "://images/" + QString::number(photoNum) + ".jpg";
    QPixmap photo(imageAddress);
    timerCount++;
    if(timerCount % 10 == 0)
    {
        ui->photoLabel->setPixmap(photo);
        photoNum++;
    }
}

void MainWindow::processImage(QPixmap *image)
{
    ui->imageLabel->setPixmap(*image);
}

void MainWindow::processWeatherJson(QJsonObject *json)
{
    qDebug() << "Json ready";
    QString weather = json->value("weather").toArray()[0].toObject()["main"].toString();
    QString weatherDesc = json->value("weather").toArray()[0].toObject()["description"].toString();
    QString zip = ui->zipCodeEdit->text();
    double temp = json->value("main").toObject()["temp"].toDouble();
    double temp_min = json->value("main").toObject()["temp_min"].toDouble();
    double temp_max = json->value("main").toObject()["temp_max"].toDouble();

    qDebug() << weather;
    qDebug() << weatherDesc;
    qDebug() << temp;
    qDebug() << temp_min;
    qDebug() << temp_max;

    ui->weatherLabel->setText("Current Weather at " + zip +
                              ": " + weather +
                              "\nAverage Temperature: " + QString::number(temp)
                              + "\nHighest: " + QString::number(temp_max)
                              + "\tLowest: " + QString::number(temp_min));

    /*
     * {
     *    "coord": {"lon":-122.38,"lat":47.64},
     *    "weather":[{"id":803,"main":"Clouds","description":"broken clouds","icon":"04d"}],
     *    "base":"stations",
     *    "main":{"temp":288.38,"pressure":1015,"humidity":72,"temp_min":287.04,"temp_max":289.82},
     *    "visibility":16093,
     *    "wind":{"speed":2.22,"deg":329.191},
     *    "clouds":{"all":75},
     *    "dt":1558543054,
     *    "sys":{"type":1,"id":3417,"message":0.0113,"country":"US","sunrise":1558527857,"sunset":1558583303},
     *    "timezone":-25200,"id":420040214,"name":"Seattle","cod":200
     * }
     * */
}

void MainWindow::on_imageDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    QString imageAddress = "://images/map.jpg";
    QPixmap photo(imageAddress);
    if(zip.length() < 5)
    {
        QMessageBox::warning(0, "Error", "Please enter a 5 digits US zip code.");
        ui->zipCodeEdit->setFocus();
        ui->imageLabel->setPixmap(photo);
        return;
    }
    qDebug() << zip;
    httpManager->sendImageRequest(zip);
}

void MainWindow::on_weatherDownloadButton_clicked()
{
    QString zip = ui->zipCodeEdit->text();
    if(zip.length() < 5)
    {
        QMessageBox::warning(0, "Error", "Please enter a 5 digits US zip code.");
        ui->zipCodeEdit->setFocus();
        ui->weatherLabel->setText("Weather Information.");
        return;
    }
    qDebug() << zip;
    httpManager->sendWeatherRequest(zip);
}

void MainWindow::on_worldButton_clicked()
{
    ui->clockWidget->setCurrentIndex(1);
}

void MainWindow::on_currentButton_clicked()
{
    ui->clockWidget->setCurrentIndex(0);
}

void MainWindow::on_actionOpen_a_to_do_list_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Open To Do List"), "",
        tr("TO Do List (*.csv);;All Files (*)"));

    myModel->openFile(fileName);
    ui->tableView->resizeColumnsToContents();
}

void MainWindow::on_actionExit_triggered()
{
    QWidget::close();
}
