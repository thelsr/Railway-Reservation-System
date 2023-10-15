// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef ACFIRSTCLASS_H
#define ACFIRSTCLASS_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class ACFirstClass : public BookingClasses {
    bool isLuxury_;          
    const bool isAC_;       
    const int numberOfTiers_;      
    const bool hasSeat_;           
    static ACFirstClass *myclass;       
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;

    ACFirstClass(string name = "AC First Class" , float loadfactor = 6.50f , bool seat = 0 , bool ac = 1 , int num_tiers = 2 , bool luxury = 1,int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 60);

public:
    ~ACFirstClass();
    static const ACFirstClass& Type();      
    float GetLoadFactor() const;
    ACFirstClass(const ACFirstClass& other) = delete;
    ACFirstClass& operator=(const ACFirstClass& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;          
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    static void UnitTestACFirstClass();      
    friend ostream& operator<<(ostream& os , const ACFirstClass& acfirstClass);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif