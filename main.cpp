#include <iostream>
#include <chrono>

using namespace std::chrono;

int main(){
    std::chrono::milliseconds now = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch());
    bool isRunning = true;
    milliseconds elapsed;

    while(isRunning){

        if(){

        }

    }

    


    return 0;
}