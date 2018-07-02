#include "QWidget2Pdf.h"

QWidget2Pdf::QWidget2Pdf() {}

QWidget2Pdf::~QWidget2Pdf() {}

bool QWidget2Pdf::save(QWidget *w, QString path, int pageWidth)
{

    QPdfWriter *writer = new QPdfWriter(path);
    writer->setPageSize(QPageSize::Custom(w->size()));
    QPainter *painter = new QPainter(writer);
    w->render(painter);
    painter->end();
    return true;
}
