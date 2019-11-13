#include "todolist.h"

ToDoList::ToDoList(QObject *parent) :
    QAbstractTableModel (parent)
{

}

int ToDoList::rowCount(const QModelIndex &parent) const
{
    return day.size();
}

int ToDoList::columnCount(const QModelIndex &parent) const
{
    return 3;
}

QVariant ToDoList::data(const QModelIndex &index, int role) const
{
    if(role == Qt::DisplayRole)
    {
        switch(index.column())
        {
        case 0: //first name
            return day.at(index.row());
        case 1: //last name
            return description.at(index.row());
        case 2: //last name
            return location.at(index.row());
        }

//        return QString("Row%1, Collum%2")
//                .arg(index.row())
//                .arg(index.column());
    }
    return QVariant();
}

void ToDoList::openFile(QString filePath)
{
    QFile file(filePath);
    if(!file.open(QIODevice::ReadOnly))
    {
        QMessageBox::information(0, "error", file.errorString());
        return;
    }

    QTextStream in(&file);

    day.clear();
    description.clear();
    location.clear();

    for(int i = 0; !in.atEnd(); i++)
    {
        QString line = in.readLine();
        QStringList fields = line.split(",");

        if(i == 0) continue;

        for(int j = 0; j < fields.length(); j++)
        {
            std::cout << "[" << j << "]" << fields[j].toStdString();
        }
        std::cout << std::endl;

        day.push_back(fields[0]);
        description.push_back(fields[1]);
        location.push_back(fields[2]);
    }

    file.close();

    emit layoutChanged();
}
