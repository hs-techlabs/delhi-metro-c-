#ifndef METROPLANNERWINDOW_H
#define METROPLANNERWINDOW_H

#include <QMainWindow>
#include <QComboBox>
#include <QCheckBox>
#include <QTextEdit>
#include <QPushButton>
#include <vector>
#include <unordered_map>
#include <string>
#include "MetroData.h"

class MetroMapView;

class MetroPlannerWindow : public QMainWindow
{
    Q_OBJECT
public:
    explicit MetroPlannerWindow(QWidget *parent = nullptr);

private slots:
    void swapStations();
    void findRoute();

private:
    void initializeStations();
    void populateStationCombos();
    void initializeGraph();
    void drawMetroMap();
    QString getLineColor(const std::string &line);

    QComboBox *fromStation;
    QComboBox *toStation;
    QCheckBox *holidayCheck;
    QCheckBox *metroCardCheck;
    QPushButton *findRouteBtn;
    QTextEdit *routeDetails;
    MetroMapView *mapView;

    std::vector<Station> stations;
    std::unordered_map<std::string, Station> stationMap;
    std::vector<std::vector<Edge>> graph;
};

#endif
