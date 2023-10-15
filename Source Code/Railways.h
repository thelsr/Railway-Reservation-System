// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef RAILWAYS_H
#define RAILWAYS_H
#include<iostream>
#include <vector>
#include <unordered_map>
#include "Station.h"
using namespace std;

class Railways {
    Railways();        
    static Railways *myRailways;  
public:
    ~Railways();
    static const Railways& IndianRailways();    
    int GetDistance(Station A , Station B) const;
    Railways(const Railways& other) = delete;
    Railways& operator=(const Railways& other) = delete;
    static const vector<Station> sStations; 
    static const vector<pair<pair<Station , Station> , int>> sDistStations;
    static void UnitTestRailways();
};

#endif // RAILWAYS_H