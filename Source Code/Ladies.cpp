// Name : kunal Singh
// Roll No. : 19CS30025

#include <iostream>
#include "BookingCategory.h"
#include "Booking.h"
#include "Ladies.h"
#include "LadiesBooking.h"
#include "BookingClasses.h"

Booking* Ladies::CreateBooking(Station A , Station B , Date& d1 , Date& d2 , Passenger& passenger ,const BookingClasses& bookingclass) const {
    return new LadiesBooking(A , B ,  d1 , d2 , passenger ,bookingclass);
}