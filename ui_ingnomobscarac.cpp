#include "ui_ingnomobscarac.h"
#include "ui_ui_ingnomobscarac.h"

ui_ingNomObsCarac::ui_ingNomObsCarac(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_ingNomObsCarac)
{
    ui->setupUi(this);
}

ui_ingNomObsCarac::~ui_ingNomObsCarac()
{
    delete ui;
}