// Name : kunal Singh
// Roll No. : 19CS30025

#include <iostream>
#include "Sleeper.h"
using namespace std;

Sleeper *Sleeper::myclass = 0;        

Sleeper::Sleeper(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ): hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers) {
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

const Sleeper& Sleeper::Type() {
    if(!myclass) {
        myclass = new Sleeper();       
    }
    return *myclass;
}

float Sleeper::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string Sleeper::GetName() const{
    return (*this).name_;
}

int Sleeper::GetNumberOfTiers() const{
    return (*this).numberOfTiers_;
}

bool Sleeper::IsSitting() const{
    return (*this).hasSeat_;
}

bool Sleeper::IsAC() const{
    return (*this).isAC_;
}

bool Sleeper::IsLuxury() const{
    return (*this).isLuxury_;
}

Sleeper::~Sleeper() {}

ostream& operator<<(ostream& os , const Sleeper& sleeper) {      
    os << "\nName : " << sleeper.name_ << endl;
    os << "Load Factor : " << sleeper.loadFactor_ << endl;
    os << "Is Sitting : " << sleeper.hasSeat_ << endl;
    os << "Is AC : " << sleeper.isAC_ << endl;
    os << "Is Luxury : " << sleeper.isLuxury_ << endl;
    os << "Number of Tiers : " << sleeper.numberOfTiers_ << "\n" << endl;
    return os;
}

void Sleeper::UnitTestSleeper() {           
    if(Sleeper::Type().name_ != "Sleeper") {
        cout << "Name of the sleeper class is wrong !" << endl; 
    }
    if(Sleeper::Type().loadFactor_ != 1.0f) {
        cout << "Load Factor of the sleeper class is wrong !" << endl;
    }
    if(Sleeper::Type().hasSeat_ != 0) {
        cout << "Has Seat of the sleeper class is wrong !" << endl;          
    }
    if(Sleeper::Type().isAC_ != 0) {
        cout << "AC of the sleeper class is wrong !" << endl;
    }
    if(Sleeper::Type().isLuxury_ != 0) {
        cout << "Luxury of the sleeper class is wrong !" << endl;
    }
    if(Sleeper::Type().numberOfTiers_ != 3) {
        cout << "Number of Tiers of the sleeper class is wrong !" << endl; 
    }
    if(Sleeper::Type().GetName() != "Sleeper") {
        cout << "Name function of the sleeper class is wrong !" << endl;  
    }
    if(Sleeper::Type().GetLoadFactor() != 1.0f) {
        cout << "Load Factor function of the sleeper class is wrong !" << endl;         
    }
    if(Sleeper::Type().IsSitting() != 0) {
        cout << "IsSitting function of the sleeper class is wrong !" << endl;
    }
    if(Sleeper::Type().IsAC() != 0) {
        cout << "IsAC function of the sleeper class is wrong !" << endl;
    }
    if(Sleeper::Type().IsLuxury() != 0) {
        cout << "IsLuxury function of the sleeper class is wrong !" << endl;
    }
    if(Sleeper::Type().GetNumberOfTiers() != 3) {
        cout << "GetNumberOfTiers function of the sleeper class is wrong !" << endl;   
    }
}