// debugging c++ file for all the features in game!
// start this to debug your code
// edit lines to make the debugger run all your implementations
// can be included into main.cpp as debugging program
// you'll get the count of features that work wrong and the names

#include <iostream>
#include <string.h>

// no need to include your packages here, include into main.cpp before the debug as this is also included there

using namespace std;

bool enterAction;
string errPosition;

int errCountGetter(){
    int errCount = 0;
    
    string name;

    Player player;
    Choices choices;

    cout << "Show 'press enter' dialogue?(y/n)";
    string answ;
    cin >> answ;
    if(detectChoice(answ) == "yes"){
        enterAction = true;
    }else{
        enterAction = false;
    }

    choices.displayOptions();
    br();
    
    choices.createOptions("Hi, Bye");
    choices.displayOptions();
    br();
    if(enterAction == true){
        pressEnter();
    }
    choices.createOptions("1,2");
    choices.displayOptions();
    br();
    
    cout << "Enter a name";
    br();
    cin >> name;
    
    int age;
    cout << "Enter an age";
    br();
    cin >> age;

    string gender;
    cout << "Enter gender(m/f)";
    br();
    cin >> gender;
    gender = detectGender(gender);
    
    string playerClass;
    cout << "Enter your class name";
    br();
    cin >> playerClass;

    try{
        player.setName(name);
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += "Setting the name of player has errors";
    }
    try{
        player.setAge(age);
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += ", Setting the age of player has errors";
    }
    try{
        player.setGender(gender);
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += ", Setting the gender of player has errors";
    }
    try{
        player.setClass(playerClass);
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += ", Setting the class of player has errors";
    }
    
    try{
        player.showStats();
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += ", Player stat shower has some errors";
    }
    
    br();
    
    try{
        player.addAge(10);
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += ", There's a problem with adding age to player";
    }
    try{
        player.greet();
    }
    catch(const std::exception& e){
        errCount += 1;
        errPosition += ", Player could not greet";
    }
    
    br();
    
    if(enterAction == true){
        pressEnter();
    }

    return errCount;
}

string errPosGetter(){
    return errPosition;
}
