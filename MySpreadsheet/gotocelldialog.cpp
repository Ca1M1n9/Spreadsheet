#include <QtWidgets>
#include "gotocelldialog.h"

GoToCellDialog::GoToCellDialog(QWidget* parent /* = 0 */) :QDialog(parent) {
	setupUi(this);
	QRegExp regExp("[A-Za-z][1-9][0-9]{0,2}");
	lineEdit->setValidator(new QRegExpValidator(regExp, this));
	buttonBox->button(QDialogButtonBox::Ok)->setEnabled(false);
	connect(buttonBox->button(QDialogButtonBox::Ok), SIGNAL(clicked()), this, SLOT(accept()));
	connect(buttonBox->button(QDialogButtonBox::Cancel), SIGNAL(clicked()), this, SLOT(reject()));
}

void GoToCellDialog::on_lineEdit_textChanged() {
	buttonBox->button(QDialogButtonBox::Ok)->setEnabled(lineEdit->hasAcceptableInput());
}