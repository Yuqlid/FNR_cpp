#include "date.h"

bool operator == (const date& d1, const date& d2){
    if(! (d1.valid() && d2.valid()) ){return false;};
    
    return ((d1.day()==d2.day()) && (d1.month()==d2.month()) && (d1.year()==d2.year()));
};

bool operator < (const date& d1, const date& d2){
    if(! (d1.valid() && d2.valid()) ){return false;};
    if(d1.year()==d2.year()){
        return (d1.day()<d2.day());
    }
    else
    {
        return (d1.month()<d2.month());
    };
};

bool operator <= (const date& d1, const date& d2){
    if(d1 == d2){return false;};
    return (d1 > d2);
};

bool operator >  (const date& d1, const date& d2){return !(d1<=d2);};
bool operator != (const date& d1, const date& d2){return !(d1==d2);};
