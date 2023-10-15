// Name : kunal Singh
// Roll No. : 19CS30025

#include <iostream>
#include "SecondSitting.h"
using namespace std;

SecondSitting *SecondSitting::myclass = 0;          

SecondSitting::SecondSitting(string name , float loadfactor , bool seat , bool ac  , int num_tiers  , bool luxury ,int mintatkal, int maxtatkal, int mindistance, int reservationcharge) : hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

const SecondSitting& SecondSitting::Type() {
    if(!myclass) {
        myclass = new SecondSitting();         
    }
    return *myclass;
}

float SecondSitting::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string SecondSitting::GetName() const{
    return (*this).name_;
}

int SecondSitting::GetNumberOfTiers() const{
    return (*this).numberOfTiers_;
}

bool SecondSitting::IsSitting() const{
    return (*this).hasSeat_;
}

bool SecondSitting::IsAC() const{
    return (*this).isAC_;
}

bool SecondSitting::IsLuxury() const{
    return (*this).isLuxury_;
}

SecondSitting::~SecondSitting() {}


ostream& operator<<(ostream& os , const SecondSitting& secondSitting) {      
    os << "\nName : " << secondSitting.name_ << endl;
    os << "Load Factor : " << secondSitting.loadFactor_ << endl;
    os << "Is Sitting : " << secondSitting.hasSeat_ << endl;
    os << "Is AC : " << secondSitting.isAC_ << endl;
    os << "Is Luxury : " << secondSitting.isLuxury_ << endl;
    os << "Number of Tiers : " << secondSitting.numberOfTiers_ << "\n" << endl;
    return os;
}

void SecondSitting::UnitTestSecondSitting() {           
    if(SecondSitting::Type().name_ != "Second Sitting") {
        cout << "Name of the SecondSitting class is wrong !" << endl; 
    }
    if(SecondSitting::Type().loadFactor_ != 0.60f) {
        cout << "Load Factor of the SecondSitting class is wrong !" << endl;
    }
    if(SecondSitting::Type().hasSeat_ != 1) {
        cout << "Has Seat of the SecondSitting class is wrong !" << endl;          
    }
    if(SecondSitting::Type().isAC_ != 0) {
        cout << "AC of the SecondSitting class is wrong !" << endl;
    }
    if(SecondSitting::Type().isLuxury_ != 0) {
        cout << "Luxury of the SecondSitting class is wrong !" << endl;
    }
    if(SecondSitting::Type().numberOfTiers_ != 0) {
        cout << "Number of Tiers of the SecondSitting class is wrong !" << endl; 
    }
    if(SecondSitting::Type().GetName() != "Second Sitting") {
        cout << "Name function of the SecondSitting class is wrong !" << endl;   
    }
    if(SecondSitting::Type().GetLoadFactor() != 0.60f) {
        cout << "Load Factor function of the SecondSitting class is wrong !" << endl;         
    }
    if(SecondSitting::Type().IsSitting() != 1) {
        cout << "IsSitting function of the SecondSitting class is wrong !" << endl;
    }
    if(SecondSitting::Type().IsAC() != 0) {
        cout << "IsAC function of the SecondSitting class is wrong !" << endl;
    }
    if(SecondSitting::Type().IsLuxury() != 0) {
        cout << "IsLuxury function of the SecondSitting class is wrong !" << endl;
    }
    if(SecondSitting::Type().GetNumberOfTiers() != 0) {
        cout << "GetNumberOfTiers function of the SecondSitting class is wrong !" << endl;   
    }
}