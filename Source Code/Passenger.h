// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef PASSENGER_H
#define PASSENGER_H
#include <iostream>
#include "Date.h"
#include "Gender.h"
using namespace std;

// Abstract base class for passenger

class Passenger {
    const string firstName_;
    const string middleName_;
    const string lastName_;
    const string aadhar_;
    const Date dateOfBirth_;
    const Gender& gender_;
    string mobileNumber_;
    string disabilityType_;
    string disabilityId_;
public:
    Passenger(const string firstname ,const Gender& gender,const string aadhar , Date dob  ,  string middlename = "" , string lastname = "" ,string mobileNumber = "" , string disabilitytype = "" , string disabilityid = "");
    Passenger(const Passenger& p); //

    ~Passenger();
    string GetName() const ;
    string GetAadhar() const ;
    string GetMobileNumber() const; 
    string GetDisabilityType() const; 
    string GetDisabilityId() const ;
    bool IsMale() const {return Gender::IsMale(gender_);}
    int GetAge(const Date& d) const;
    static Passenger Construct(const string firstname ,const Gender& gender,const string aadhar , Date dob  ,  string middlename = "" , string lastname = "" ,string mobileNumber = "" , string disabilitytype = "" , string disabilityid = "");
    static void UnitTestPassenger();
    friend ostream& operator<<(ostream& os , const Passenger& Passenger);
    Date GetDob() const {return dateOfBirth_;}
};

#endif // PASSENGER_H