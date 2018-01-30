#ifndef SIMULARE_WINDOW_H
#define SIMULARE_WINDOW_H
#include"clasament.h"
#include <QDialog>

namespace Ui {
class simulare_window;
}

class simulare_window : public QDialog
{
    Q_OBJECT

public:
    explicit simulare_window(QWidget *parent = 0);
    ~simulare_window();

private slots:
    void on_b_clasamente_clicked();

private:
    Ui::simulare_window *ui;
    clasament *c;
};

#endif // SIMULARE_WINDOW_H
