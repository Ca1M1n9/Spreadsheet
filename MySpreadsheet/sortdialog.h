#pragma once
#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>
#include "ui_sortdialog.h"

class SortDialog :public QDialog, public Ui::SortDialog {
	Q_OBJECT
public:
	SortDialog(QWidget* parent = 0);
	void setColumnRange(QChar first, QChar last);
private slots:
	void on_moreButton_toggled(bool);
};

#endif // !SORTDIALOG_H
