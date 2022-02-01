#include "event.h"

event::event(int d, int m, int y, std::string n){
    std::cout <<"constructor invoked" << std::endl;
    if(m>12 || m<0){
        std::cout << "Enter a month between 1 and 12" << std::endl;
    }
    if(m%2 == 0&& m!=2){
        if(d > 31 || d < 0){
            std::cout <<"Enter a day that is within the month" << std::endl;
        } else {
        event::day = d;
        event::month = m;
        event::year = y;
        event::name = n;
        }
    } else if(m==2) {
        if(d > 28 || d<0){
            std::cout <<"Enter a day that is within the month" << std::endl;
        } else {
        event::day = d;
        event::month = m;
        event::year = y;
        event::name = n;
        }
        
    } else if(m%2 == 1) {
        if(d>30 || d < 0){
            std::cout<<"Enter a day that is within the month" << std::endl;
            
        } else{
        event::day = d;
        event::month = m;
        event::year = y;
        event::name = n;
        }
        
    } else {
        std::cout <<"code reached" << std::endl;
        event::day = d;
        event::month = m;
        event::year = y;
        event::name = n;
    }
    

}

int event::getDay(){
    return event::day;
}

int event::getMonth(){
    return event::month;
}

int event::getYear(){
    return event::year;
}

void event::display(){
    std::cout << "Name: " << name << " Day: " << day << " Month: " << month << " Year: " << year << std::endl;
}