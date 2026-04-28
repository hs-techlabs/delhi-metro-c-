#ifndef ROUTECALCULATOR_H
#define ROUTECALCULATOR_H

#include "MetroData.h"
#include <vector>

void dijkstra(int start, const std::vector<std::vector<Edge>> &graph,
              std::vector<int> &distances, std::vector<int> &previous);

std::vector<int> reconstructPath(int start, int end, const std::vector<int> &previous,
                                 const std::vector<Station> &stations);

int calculateFare(double distance, bool isHoliday);

double calculatePathDistance(const std::vector<int> &path, const std::vector<std::vector<Edge>> &graph);

#endif
