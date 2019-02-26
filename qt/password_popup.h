#ifndef PASSWORD_POPUP_H
#define PASSWORD_POPUP_H

#include <QDialog>

namespace Ui {
class Password_Popup;
}

class Password_Popup : public QDialog
{
    Q_OBJECT

public:
    explicit Password_Popup(QWidget *parent = 0);
    ~Password_Popup();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Password_Popup *ui;
};

#endif // PASSWORD_POPUP_H
