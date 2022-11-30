#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MySpreadsheet.h"

class MySpreadsheet : public QMainWindow
{
    Q_OBJECT

public:
    MySpreadsheet(QWidget *parent = nullptr);
    ~MySpreadsheet();

private:
    Ui::MySpreadsheetClass ui;
};
