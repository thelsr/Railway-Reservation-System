// Name : kunal Singh
// Roll No. : 19CS30025

#ifndef CONCESSION_H
#define CONCESSION_H
#include <iostream>
#include "BookingCategory.h"
using namespace std;

class Concession : public BookingCategory {
protected:
    Concession(string name) : BookingCategory(name) {}
};

#endif