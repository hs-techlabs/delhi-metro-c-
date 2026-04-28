#ifndef VISUALIZATION_H
#define VISUALIZATION_H

#include "MetroData.h"
#include <vector>
#include <string>
#include <QString>

QString getLineColorHTML(const std::string &line);

QString getRouteHTML(const std::vector<int> &path, const std::vector<Station> &stations,
                     int travelTime, double totalDistance, int fare,
                     bool isHoliday = false, bool hasMetroCard = false);

#endif
