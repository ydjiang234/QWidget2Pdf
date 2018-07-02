#ifndef QWIDGET2PDF_H
#define QWIDGET2PDF_H

#include <QWidget>
#include <QPdfWriter>
#include <QPainter>
#include <iostream>

class QWidget2Pdf
{
public:
    QWidget2Pdf();
    ~QWidget2Pdf();
    bool save(QWidget *w, QString path, int pageWidth=210);//page width should be in mm
};

#endif // QWIDGET2PDF_H
