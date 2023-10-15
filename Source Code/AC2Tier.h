// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef AC2TIER_H
#define AC2TIER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class AC2Tier : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_;          
    static AC2Tier *myclass;       
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;
  
    AC2Tier(string name = "AC 2 Tier" , float loadfactor = 4.0f , bool seat = 0 , bool ac = 1 , int num_tiers = 2 , bool luxury = 0 , int mintatkal = 400 , int maxtatkal = 500 , int mindistance = 500 , int reservationcharge = 50);

public:
    ~AC2Tier();
    static const AC2Tier& Type();       
    float GetLoadFactor() const;
    AC2Tier(const AC2Tier& other) = delete;
    AC2Tier& operator=(const AC2Tier& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;              
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    static void UnitTestAC2Tier();      
    friend ostream& operator<<(ostream& os , const AC2Tier& ac2Tier);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif