// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef __GENDER_H
#define __GENDER_H
#include <string>
using namespace std;

class Gender {
    const string& name_;
protected:
    Gender(const string& name) : name_(name) { }
    virtual ~Gender() { }
public:
    const string& GetName() const { return name_; }
    virtual const string GetTitle() const = 0; 
    static bool IsMale(const Gender&); 
};

class Male : public Gender {
    Male() : Gender(Male::sName) {}
    static const string sName; 
public:
    static const Gender& Type() { 
        static const Male theObj; 
        return theObj;
    }
    const string GetTitle() const 
    { return "Mr."; } 
};

class Female : public Gender {
    Female() : Gender(Female::sName) { }
    static const string sName; 
public:
    static const Gender& Type() { 
        static const Female theObj; 
        return theObj;
    }
    const string GetTitle() const 
    { return "Ms."; } 
};
inline bool Gender::IsMale(const Gender& g) { return &g == &Male::Type(); }
#endif // __GENDER_H