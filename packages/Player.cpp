#include <iostream>

using namespace std;

class Player{
    private:
        string Name;
        int Age;
        string Class;
        string Gender;
    
    public:
    // setters
        void setName(string value){
            Name = value;
            return;
        }
        void setGender(string value){
            Gender = value;
            return;
        }
        void setAge(int value){
            Age = value;
            return;
        }
        void setClass(string value){
            Class = value;
            return;
        }

    // adders
        void addAge(int amount){
            Age += amount;
            return;
        }

    // getters
        string getName(){
            return Name;
        }
        int getAge(){
            return Age;
        }

    // debug
        void greet(){
            cout << "Hi, my name is " << Name;
            cout << " I'm " << Age;
            cout << " years old and I'm " << Gender;
            cout << ", my class is: " << Class;
            return;
        }
        void showStats(){
            cout << "Name: " << Name << "\n";
            cout << "Age: " << Age << "\n";
            cout << "Class: " << Class << "\n";
            cout << "Gender: " << Gender;
            return;
        }
};
