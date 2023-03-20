#include <iostream>
#include <stdlib.h>

using namespace std;

void clear(){
    #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
        system("cls");
    #else
        system("clear");
    #endif
    return;
}

void br(){
    cout << "\n";
    return;
}

string detectGender(string value){
    char chValue = value[0];
    chValue = std::tolower(chValue);
    if (chValue == 'm'){
        return "Male";
    }
    else if (chValue == 'f'){
        return "Female";
    }
    else{
        return "error";
    }
}
string detectChoice(string value){
    char chValue = value[0];
    chValue = std::tolower(chValue);
    if (chValue == 'y'){
        return "yes";
    }
    else if (chValue == 'n'){
        return "no";
    }
    else{
        return "error";
    }
}
int checkChosenOption(int value){
    if(value < 1){
        return -1;
    }else{
        return value;
    }
}
void pressEnter(){
    cout << "\n";
    #if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
        system("pause");
    #else
        system("read");
    #endif
    return;
}
