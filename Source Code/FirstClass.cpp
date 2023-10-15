// Name : kunal Singh
// Roll No. : 19CS30025

#include <iostream>
#include "FirstClass.h"
using namespace std;

FirstClass *FirstClass::myclass = 0;        

FirstClass::FirstClass(string name , float loadfactor, bool seat , bool ac, int num_tiers , bool luxury,int mintatkal, int maxtatkal, int mindistance, int reservationcharge ) : hasSeat_(seat) , isAC_(ac) , numberOfTiers_(num_tiers){
    name_ = name;
    loadFactor_ = loadfactor;
    isLuxury_ = luxury;
    minTatkalCharge = mintatkal;
    maxTatkalCharge = maxtatkal;
    reservationCharges = reservationcharge;
    minTatkalDistance = mindistance;
}

const FirstClass& FirstClass::Type() {
    if(!myclass) {
        myclass = new FirstClass();     
    }
    return *myclass;
}

float FirstClass::GetLoadFactor() const{
    return (*this).loadFactor_;
}

string FirstClass::GetName() const{
    return (*this).name_;
}

int FirstClass::GetNumberOfTiers() const{
    return (*this).numberOfTiers_;
}

bool FirstClass::IsSitting() const{
    return (*this).hasSeat_;
}

bool FirstClass::IsAC() const{
    return (*this).isAC_;
}

bool FirstClass::IsLuxury() const{
    return (*this).isLuxury_;
}

FirstClass::~FirstClass() {}


ostream& operator<<(ostream& os , const FirstClass& firstClass) {    
    os << "\nName : " << firstClass.name_ << endl;
    os << "Load Factor : " << firstClass.loadFactor_ << endl;
    os << "Is Sitting : " << firstClass.hasSeat_ << endl;
    os << "Is AC : " << firstClass.isAC_ << endl;
    os << "Is Luxury : " << firstClass.isLuxury_ << endl;
    os << "Number of Tiers : " << firstClass.numberOfTiers_ << "\n" << endl;
    return os;
}

void FirstClass::UnitTestFirstClass() {           
    if(FirstClass::Type().name_ != "First Class") {
        cout << "Name of the FirstClass class is wrong !" << endl; 
    }
    if(FirstClass::Type().loadFactor_ != 3.0f) {
        cout << "Load Factor of the FirstClass class is wrong !" << endl;
    }
    if(FirstClass::Type().hasSeat_ != 0) {
        cout << "Has Seat of the FirstClass class is wrong !" << endl;         
    }
    if(FirstClass::Type().isAC_ != 0) {
        cout << "AC of the FirstClass class is wrong !" << endl;
    }
    if(FirstClass::Type().isLuxury_ != 1) {
        cout << "Luxury of the FirstClass class is wrong !" << endl;
    }
    if(FirstClass::Type().numberOfTiers_ != 2) {
        cout << "Number of Tiers of the FirstClass class is wrong !" << endl; 
    }
    if(FirstClass::Type().GetName() != "First Class") {
        cout << "Name function of the FirstClass class is wrong !" << endl;   
    }
    if(FirstClass::Type().GetLoadFactor() != 3.0f) {
        cout << "Load Factor function of the FirstClass class is wrong !" << endl;        
    }
    if(FirstClass::Type().IsSitting() != 0) {
        cout << "IsSitting function of the FirstClass class is wrong !" << endl;
    }
    if(FirstClass::Type().IsAC() != 0) {
        cout << "IsAC function of the FirstClass class is wrong !" << endl;
    }
    if(FirstClass::Type().IsLuxury() != 1) {
        cout << "IsLuxury function of the FirstClass class is wrong !" << endl;
    }
    if(FirstClass::Type().GetNumberOfTiers() != 2) {
        cout << "GetNumberOfTiers function of the FirstClass class is wrong !" << endl;   
    }
}