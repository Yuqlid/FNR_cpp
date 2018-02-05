#include "date.h"

date nexe_date(const date& d){
    if(! d.valid()){return date();};
    date ndat = date((d.day()+1), d.month(), d.year());
    if(ndat.valid()) return ndat;
    ndat = date(1, (d.month()+1), d.year());
    if(ndat.valid())return ndat;
    ndat = date(1, 1, (d.year()+1));
    return ndat;
}

date previos_date(const date& d){
    if(! d.valid()){return date();};
    date pdat = date((d.day()-1), d.month(), d.year()); if(pdat.valid())return pdat;
    pdat = date(31, (d.month()-1), d.year()); if(pdat.valid())return pdat;
    pdat = date(30, (d.month()-1), d.year()); if(pdat.valid())return pdat;
    pdat = date(29, (d.month()-1), d.year()); if(pdat.valid())return pdat;
    pdat = date(28, (d.month()-1), d.year()); if(pdat.valid())return pdat;
    pdat = date(31, 12, (d.year()-1));

    return pdat;
}

date date::operator++(int){
    date d = *this;
    *this = nexe_date(d);
    return d;
}

date date::operator++(){
    *this = nexe_date(d);
    return *this;
}

date date::operator--(int){
    date d = *this;
    *this = previos_date(d);
    return d;
}

date date::operator--(){
    *this = previos_date(*this);
    return *this;
}