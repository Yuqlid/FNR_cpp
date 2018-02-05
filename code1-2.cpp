#include "date.h"

date::date(const int& day, const int& month, const int& year){
    day_ = day;
    month_ = month;
    year_ = year;
};

int date::day() const {return day_;};
int date::month() const{return month_;};
int date::year() const{return year_;};

void date::set_day(const int& day) {date::day_ = day;};
void date::set_month(const int& month) {date::month_ = month;};
void date::set_year(const int& year) {date::year_ = year;};

bool date::valid() const {
    if(year_ < 0) return false;
    if(month_ > 12 || month_ < 1) return false;
    if(day_ >31 || day_ < 1) return false;
    if(day_ == 31 && (month_ == 2 || month_ == 4 || month_ == 6 || month_ == 9 || month_ == 11))return false;
    if(day_==30 && month_ == 2)return false;

    return true;
}