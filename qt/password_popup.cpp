#include "password_popup.h"
#include "ui_password_popup.h"

Password_Popup::Password_Popup(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Password_Popup)
{
    ui->setupUi(this);
}

Password_Popup::~Password_Popup()
{
    delete ui;
}

void Password_Popup::on_pushButton_clicked()
{
    Password_Popup pass;
    pass.setModal(true);
    pass.exec();
}
