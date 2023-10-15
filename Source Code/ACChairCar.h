// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef ACCHAIRCAR_H
#define ACCHAIRCAR_H

#include <iostream>
#include "BookingClasses.h"
using namespace std;

class ACChairCar : public BookingClasses {
    bool isLuxury_;           
    const bool isAC_;       
    const int numberOfTiers_;       
    const bool hasSeat_;           
    static ACChairCar *myclass;      
    int minTatkalCharge;
    int maxTatkalCharge;
    int minTatkalDistance;
    int reservationCharges;
 
    ACChairCar(string name = "AC Chair Car" , float loadfactor = 2.00f , bool seat = 1 , bool ac = 1 , int num_tiers = 0 , bool luxury = 0,int mintatkal = 125 , int maxtatkal = 225 , int mindistance = 250 , int reservationcharge = 40);

public:
    ~ACChairCar();
    static const ACChairCar& Type();        
    float GetLoadFactor() const;
    ACChairCar(const ACChairCar& other) = delete;
    ACChairCar& operator=(const ACChairCar& other) = delete;
    string GetName() const;
    bool IsSitting() const;
    bool IsAC() const;          
    int GetNumberOfTiers() const;
    bool IsLuxury() const;
    static void UnitTestACChairCar();     
    friend ostream& operator<<(ostream& os , const ACChairCar& acchairCar);
    int GetMinimumTatkalCharge() const {return minTatkalCharge;};
    int GetMaximumTatkalCharge() const {return maxTatkalCharge;};
    int GetMinimumTatkalDistance() const {return minTatkalDistance;};
    int GetReservationCharge() const {return reservationCharges;};
};


#endif