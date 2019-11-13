#ifndef TODOLIST_H
#define TODOLIST_H

#include <QAbstractTableModel>
#include <QFileDialog>
#include <QMessageBox>
#include <QTextStream>
#include <vector>
#include <iostream>

class ToDoList : public QAbstractTableModel
{
public:
    ToDoList(QObject *parent);
    std::vector<QString> day;
    std::vector<QString> description;
    std::vector<QString> location;

    // QAbstractItemModel interface
public:
    int rowCount(const QModelIndex &parent) const;
    int columnCount(const QModelIndex &parent) const;
    QVariant data(const QModelIndex &index, int role) const;

    void openFile(QString filePath);
};

#endif // TODOLIST_H
