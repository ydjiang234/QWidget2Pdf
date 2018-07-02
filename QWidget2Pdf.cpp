#include "QWidget2Pdf.h"
#include <QPageLayout>
#include <QPageSize>
#include <QMarginsF>
#include <QPainter>
#include <QPdfWriter>
#include <QString>


QWidget2Pdf::QWidget2Pdf() {}

QWidget2Pdf::~QWidget2Pdf() {}

bool QWidget2Pdf::save(QWidget *w, QString path)
{

    QPdfWriter *writer = new QPdfWriter(path);
    //double ratio = (double) w->height()/w->width();
    writer->setPageSizeMM(QSize(w->widthMM(), w->heightMM()));

    writer->setPageMargins(QMargins(0,0,0,0));
    //Important here
    writer->setResolution(w->width()*25.4/w->widthMM());
    //Important
    QPainter *painter = new QPainter(writer);
    w->render(painter);
    painter->end();
    return true;
}
