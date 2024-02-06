#include "Date.h"
#include <iostream>
using namespace std;

    Date::Date(unsigned short day, unsigned short month, long long year)
    {
        SetDay(day);
        SetMonth(month);
        SetYear(year);
    }
    //�������������
    Date::Date(unsigned short day, unsigned short month) : Date(day, month, 2005) {}


    void  Date::PrintDate() const
    {
        cout << day << "." << month << "." << year << "\n";
    }
    //day SetGet
    void  Date::SetDay(unsigned short day)
    {
        if (day == 0 || day > 31) throw "ERROR!!! The day must be from 0 to 31 !!!";
        this->day = day;
    }
    unsigned short  Date::GetDay() const
    {
        return day;
    }
    //month SetGet
    void  Date::SetMonth(unsigned short month)
    {
        if (month == 0 || month > 12) throw "ERROR!!! The day must be from 1 to 12 !!!";
        this->month = month;
    }
    unsigned short  Date::GetMonth() const
    {
        return month;
    }
    //year SetGet
    void  Date::SetYear(long long year)
    {
        this->year = year;
    }
    long long  Date::GetYear() const
    {
        return year;
    }

