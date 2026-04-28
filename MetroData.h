#ifndef METRODATA_H
#define METRODATA_H
#include <string>
#include <vector>
struct Station
{
    int id;
    std::string name;
    std::string line;
    double x;
    double y;
};
struct Edge
{
    int destination;
    int weight;
    double distance;
};
std::vector<std::string> splitLines(const std::string &lines);
void initializeMetroNetwork(std::vector<Station> &stations, std::vector<std::vector<Edge>> &graph);
#endif
