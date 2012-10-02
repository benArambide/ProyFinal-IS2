#ifndef UI_INGNOMOBSCARAC_H
#define UI_INGNOMOBSCARAC_H

#include <QDialog>

namespace Ui {
    class ui_ingNomObsCarac;
}

class ui_ingNomObsCarac : public QDialog
{
    Q_OBJECT

public:
    explicit ui_ingNomObsCarac(QWidget *parent = 0);
    ~ui_ingNomObsCarac();

private:
    Ui::ui_ingNomObsCarac *ui;
};

#endif // UI_INGNOMOBSCARAC_H
