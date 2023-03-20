#include <iostream>
#include <string.h>

// my libraries
// base packages of classes
#include "packages/Player.cpp"
#include "packages/Choices.cpp"
#include "packages/Utilities.cpp"
// debug
#include "debug.cpp"

using namespace std;

void startScreen(){
    cout << "Do you want to test features before the run with test variables?(y/n)";
    br();
    string answ;
    cin >> answ;
    if(detectChoice(answ) == "yes"){
        int errorCount = errCountGetter();
        string errors = errPosGetter();
        cout << "Debug complete!";
        br();

        if(errorCount > 0){
            cout << "There are " << errorCount << " errors.";
            br();
            cout << "Mesages: " << errors;
        }
        else{
            cout << "No errors found! You can play.";
        }
        
        pressEnter();
    }else{
        cout << "Starting...";
    }
}

int main(){
    

    return 0;
}
