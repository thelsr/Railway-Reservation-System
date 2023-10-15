// Name : kunal Singh
// Roll No. : 19CS30025

#include <iostream>
#include "ACChairCar.h"
using namespace std;

ACChairCar *ACChairCar::myclass = 0;   

ACChairCar::ACChairCar(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

const ACChairCar& ACChairCar::Type() {
    if(!myclass) {
        myclass = new ACChairCar();         
    }
    return *myclass;
}

float ACChairCar::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string ACChairCar::GetName() const{
    return (*this).name_;
}

int ACChairCar::GetNumberOfTiers() const{
    return (*this).numberOfTiers_;
}

bool ACChairCar::IsSitting() const{
    return (*this).hasSeat_;
}

bool ACChairCar::IsAC() const{
    return (*this).isAC_;
}

bool ACChairCar::IsLuxury() const{
    return (*this).isLuxury_;
}

ACChairCar::~ACChairCar() {}

ostream& operator<<(ostream& os , const ACChairCar& acchairCar) {     
    os << "\nName : " << acchairCar.name_ << endl;
    os << "Load Factor : " << acchairCar.loadFactor_ << endl;
    os << "Is Sitting : " << acchairCar.hasSeat_ << endl;
    os << "Is AC : " << acchairCar.isAC_ << endl;
    os << "Is Luxury : " << acchairCar.isLuxury_ << endl;
    os << "Number of Tiers : " << acchairCar.numberOfTiers_ << "\n" << endl;
    return os;
}

void ACChairCar::UnitTestACChairCar() {            
    if(ACChairCar::Type().name_ != "AC Chair Car") {
        cout << "Name of the ACChairCar class is wrong !" << endl; 
    }
    if(ACChairCar::Type().loadFactor_ != 2.0f) {
        cout << "Load Factor of the ACChairCar class is wrong !" << endl;
    }
    if(ACChairCar::Type().hasSeat_ != 1) {
        cout << "Has Seat of the ACChairCar class is wrong !" << endl;          
    }
    if(ACChairCar::Type().isAC_ != 1) {
        cout << "AC of the ACChairCar class is wrong !" << endl;
    }
    if(ACChairCar::Type().isLuxury_ != 0) {
        cout << "Luxury of the ACChairCar class is wrong !" << endl;
    }
    if(ACChairCar::Type().numberOfTiers_ != 0) {
        cout << "Number of Tiers of the ACChairCar class is wrong !" << endl; 
    }
    if(ACChairCar::Type().GetName() != "AC Chair Car") {
        cout << "Name function of the ACChairCar class is wrong !" << endl;   
    }
    if(ACChairCar::Type().GetLoadFactor() != 2.0f) {
        cout << "Load Factor function of the ACChairCar class is wrong !" << endl;         
    }
    if(ACChairCar::Type().IsSitting() != 1) {
        cout << "IsSitting function of the ACChairCar class is wrong !" << endl;
    }
    if(ACChairCar::Type().IsAC() != 1) {
        cout << "IsAC function of the ACChairCar class is wrong !" << endl;
    }
    if(ACChairCar::Type().IsLuxury() != 0) {
        cout << "IsLuxury function of the ACChairCar class is wrong !" << endl;
    }
    if(ACChairCar::Type().GetNumberOfTiers() != 0) {
        cout << "GetNumberOfTiers function of the ACChairCar class is wrong !" << endl;   
    }
}