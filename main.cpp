#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include "event.h"


using namespace std;

int main(){
    cout << "Welcome to reminder" << std::endl;
    string command;
    vector<event> events;
    bool isRunning = true;

    while(isRunning){
        cout << "Enter c to create an event, enter v to view events, enter s to save to events.txt, enter l to load from events.txt, enter q to quit" << endl;
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
        if(command == "s"){
            cout << "Saving events to events.txt" << endl;
            ofstream saveFile("events.txt");
            for(int i = 0; i < events.size();i++){
                saveFile << events[i].getDay() << ",";
                saveFile << events[i].getMonth() << ",";
                saveFile << events[i].getYear() << ",";
                saveFile << events[i].getName();
                saveFile << "\n";
            }
        }

        if(command == "l"){
            ifstream saveFile("events.txt");
            string delimiter = ",";
            string line = "";


        }
        if(command == "q"){
            cout << "Thanks" << endl;
            isRunning = false;
        }
    }


    


    return 0;
}