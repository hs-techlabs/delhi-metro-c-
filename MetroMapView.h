#ifndef METROMAPVIEW_H
#define METROMAPVIEW_H

#include <QGraphicsView>
#include <QResizeEvent>
#include <vector>
#include "MetroData.h"

class MetroMapView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MetroMapView(QWidget *parent = nullptr);
    void drawStation(const QString &name, double x, double y, const QString &line);
    void drawLine(double x1, double y1, double x2, double y2, const QString &line);
    void highlightPath(const std::vector<int> &path, const std::vector<Station> &stations);
    void clearRoute();

protected:
    void resizeEvent(QResizeEvent *event) override;
};

#endif
