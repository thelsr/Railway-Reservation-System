// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef STATION_H
#define STATION_H
#include<iostream>
using namespace std;

class Station {
    string name_;
public:
    Station(string name);
    string GetName() const;
    int GetDistance(const Station& other);
    Station(const Station& other);
    Station& operator=(const Station& other);
    ~Station();
    bool operator==(const Station& other);    
    friend ostream& operator<<(ostream& os, const Station& station);
    static void UnitTestStation();   
    static Station Construct(string name = "");
};

#endif // STATION_H