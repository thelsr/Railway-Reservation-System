// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef EXECUTIVECHAIRCAR_H
#define EXECUTIVECHAIRCAR_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class ExecutiveChairCar : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;      
    const bool hasSeat_;           
    static ExecutiveChairCar *myclass;      
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;

    ExecutiveChairCar(string name = "Executive Chair Car" , float loadfactor = 5.00f , bool seat = 1 , bool ac = 1 , int num_tiers = 0 , bool luxury = 1 , int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 250 , int reservationcharge = 60);

public:
    ~ExecutiveChairCar();
    static const ExecutiveChairCar& Type();       
    float GetLoadFactor() const;
    ExecutiveChairCar(const ExecutiveChairCar& other) = delete;
    ExecutiveChairCar& operator=(const ExecutiveChairCar& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;              
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    static void UnitTestExecutiveChairCar();     
    friend ostream& operator<<(ostream& os , const ExecutiveChairCar& ExecutiveChairCar);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif