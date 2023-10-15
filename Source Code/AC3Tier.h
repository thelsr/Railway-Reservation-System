// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef AC3TIER_H
#define AC3TIER_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class AC3Tier : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_;           
    static AC3Tier *myclass;      
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;

    AC3Tier(string name = "AC 3 Tier" , float loadfactor = 2.50f , bool seat = 0 , bool ac = 1 , int num_tiers = 3 , bool luxury = 0,int mintatkal = 300 , int maxtatkal = 400 , int mindistance = 500 , int reservationcharge = 40);

public:
    ~AC3Tier();
    static const AC3Tier& Type();       
    float GetLoadFactor() const;
    AC3Tier(const AC3Tier& other) = delete;
    AC3Tier& operator=(const AC3Tier& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;              
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    static void UnitTestAC3Tier();      
    friend ostream& operator<<(ostream& os , const AC3Tier& ac3Tier);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif