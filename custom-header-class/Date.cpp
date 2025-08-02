#include <iostream>
#include "Date.h"

Date::Date(int year, int month, int day)
    : year(year)
    , month(month)
    , day(day) {}

void Date::display_date() const{
    std::cout << "Date:\n" << day << '-' << month << '-' << year;
}