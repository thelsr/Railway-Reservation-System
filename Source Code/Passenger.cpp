// Name : kunal Singh
// Roll No. : 19CS30025

#include <iostream>
#include "Passenger.h"
#include "Date.h"
#include "Gender.h"
#include <string>
#include <algorithm>
#include "Exception.h"

Passenger::Passenger(const string firstname ,const Gender& gender, const string aadhar , Date dob  ,  string middlename  , string lastname  ,string mobileNumber  , string disabilitytype , string disabilityid) : firstName_(firstname) , middleName_(middlename) , lastName_(lastname) , aadhar_(aadhar) , dateOfBirth_(dob) , gender_(gender){
    mobileNumber_ = mobileNumber;
    disabilityType_ = disabilitytype;
    disabilityId_ = disabilityid;
}

Passenger::Passenger(const Passenger& p) : firstName_(p.firstName_) , middleName_(p.middleName_) , lastName_(p.lastName_) , aadhar_(p.aadhar_) , dateOfBirth_(p.dateOfBirth_) , gender_(p.gender_) {
    mobileNumber_ = p.mobileNumber_;
    disabilityType_ = p.disabilityType_;
    disabilityId_ = p.disabilityId_;
}

Passenger::~Passenger() {}

int Passenger::GetAge(const Date& d) const {
    return d.GetYear()-(*this).dateOfBirth_.GetYear();
}

string Passenger::GetName() const{
    return firstName_ + " " + middleName_ + " " + lastName_;
}

string Passenger::GetAadhar() const {
    return aadhar_;
}

string Passenger::GetMobileNumber() const {
    return mobileNumber_;
}
string Passenger::GetDisabilityType() const {
    return disabilityType_;
}
string Passenger::GetDisabilityId() const {
    return disabilityId_;
}

ostream& operator<<(ostream& os , const Passenger& p) {      
    os << "Passenger Name : " << p.GetName()<<endl;
    os << "Aadhar Number : "<<p.GetAadhar()<<endl;
    os << "Mobile Number : "<<p.GetMobileNumber()<<endl;
    return os;
}

bool is_digits(const std::string &str)
{
    return std::all_of(str.begin(), str.end(), ::isdigit); // C++11
}

Passenger Passenger :: Construct(const string firstname ,const Gender& gender,const string aadhar , Date dob  ,  string middlename, string lastname, string mobileNumber, string disabilitytype, string disabilityid){
    int flag = 0;
    if(!dob.IsValidDate()){
        flag = 1;
    }
    if(!is_digits(aadhar) || (aadhar.size() != 12)){
        flag = 1;
    }
    if((mobileNumber.size() != 10 && mobileNumber.size() != 0) || !is_digits(mobileNumber)){
        flag = 1;
    }
    if((firstname == "" && lastname == "")){
        flag = 1;
    }
    
    try{
        if(flag){
            BadPassenger ex;
            throw ex;
        }
        else{
            Passenger *p = new Passenger( firstname , gender, aadhar , dob,  middlename, lastname, mobileNumber, disabilitytype, disabilityid);
            return *p;
        }
    }
    catch(BadPassenger &ex){
        throw;
    }
}

void Passenger :: UnitTestPassenger(){
    try{
        Passenger p1 = Passenger :: Construct("CRM" , Female::Type() , "123456789111" , Date::Construct(17,12,1901));
        cout<<"CORRECT PASSENGER CONSTRUCTION : PASSED"<<endl;
    }
    catch(BadPassenger &ex){
        cout<<"CORRECT PASSENGER CONSTRUCTION : FAILED" <<endl;
    }

    try{
        Passenger p1 = Passenger :: Construct("CRM" , Female::Type() , "123456789111" , Date::Construct(17,12,3000));
        cout<<"INCORRECT PASSENGER DUE TO DOB CONSTRUCTION (NEGATIVE TEST): PASSED"<<endl;
    }
    catch(BadDate &ex){
        cout<<"INCORRECT PASSENGER DUE TO DOB CONSTRUCTION (NEGATIVE TEST): FAILED" <<endl;
    }

    try{
        Passenger p1 = Passenger :: Construct("CRM" , Female::Type() , "12345678911" , Date::Construct(17,12,2002));
        cout<<"INCORRECT PASSENGER DUE TO AADHAR LENGHT CONSTRUCTION (NEGATIVE TEST): PASSED"<<endl;
    }
    catch(BadPassenger &ex){
        cout<<"INCORRECT PASSENGER DUE TO AADHAR LENGHT CONSTRUCTION (NEGATIVE TEST): FAILED" <<endl;
    }

    try{
        Passenger p1 = Passenger :: Construct("CRM" , Female::Type() , "1234a6728911" , Date::Construct(17,12,2002));
        cout<<"INCORRECT PASSENGER DUE TO AADHAR DIGITS CONSTRUCTION (NEGATIVE TEST): PASSED"<<endl;
    }
    catch(BadPassenger &ex){
        cout<<"INCORRECT PASSENGER DUE TO AADHAR DIGITS CONSTRUCTION (NEGATIVE TEST): FAILED" <<endl;
    }

    try{
        Passenger p1 = Passenger::Construct("CRM" , Male::Type() , "123456789111" , Date::Construct(17,12,1901) , "" , "Singh" , "78a7658902" ,"Blind");
        cout<<"INCORRECT PASSENGER DUE TO MOBILE DIGITS CONSTRUCTION (NEGATIVE TEST): PASSED"<<endl;
    }
    catch(BadPassenger &ex){
        cout<<"INCORRECT PASSENGER DUE TO MOBILE DIGITS CONSTRUCTION (NEGATIVE TEST): FAILED" <<endl;
    }

    try{
        Passenger p1 = Passenger::Construct("CRM" , Male::Type() , "123456789111" , Date::Construct(17,12,1901) , "" , "Singh" , "787658902" ,"Blind");
        cout<<"INCORRECT PASSENGER DUE TO MOBILE LENGHT CONSTRUCTION (NEGATIVE TEST): PASSED"<<endl;
    }
    catch(BadPassenger &ex){
        cout<<"INCORRECT PASSENGER DUE TO MOBILE LENGTH CONSTRUCTION (NEGATIVE TEST): FAILED" <<endl;
    }

    try{
        Passenger p1 = Passenger::Construct("" , Male::Type() , "123456789111" , Date::Construct(17,12,1901) , "" , "" , "787658902" ,"Blind");
        cout<<"INCORRECT PASSENGER DUE TO FIRST AND LAST NAME CONSTRUCTION (NEGATIVE TEST): PASSED"<<endl;
    }
    catch(BadPassenger &ex){
        cout<<"INCORRECT PASSENGER DUE TO FIRST AND LAST NAME CONSTRUCTION (NEGATIVE TEST): FAILED" <<endl;
    }

}
