#ifndef QWIDGET2PDF_H
#define QWIDGET2PDF_H

#include <QWidget>

class QWidget2Pdf
{
public:
    QWidget2Pdf();
    ~QWidget2Pdf();
    bool save(QWidget *w, QString path);//page width should be in mm
};

#endif // QWIDGET2PDF_H
