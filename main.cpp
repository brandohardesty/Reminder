#include <iostream>
#include <ctime>
#include <vector>
#include "event.h"

using namespace std;

int main(){
    cout << "Welcome to reminder" << std::endl;
    string command;
    vector<event> events;
    bool isRunning = true;

    while(isRunning){
        cout << "Enter c to create an event, enter v to view events, enter q to quit" << endl;
        cin >> command;
        if(command == "c"){
            
            string day;
            string month;
            string year;
            string name;
            cout << "Enter the day" << endl;
            
            cin >> day;

            cout << "Enter the month" << endl;

            cin >> month;
            
            cout << "Enter the year" << endl;

            cin >> year;

            cout << "Enter name" << endl;

            cin >> name;


            event currentEvent(stoi(day),stoi(month),stoi(year),name);

            events.push_back(currentEvent);


           

        }

        if(command == "v"){
            for(int i = 0; i < events.size(); i++){
                events[i].display();
            }
            cout << "\n" << endl;
        }
        if(command == "q"){
            cout << "Thanks" << endl;
            isRunning = false;
        }
    }


    


    return 0;
}