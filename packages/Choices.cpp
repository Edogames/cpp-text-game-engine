#include <iostream>
#include <string>

using namespace std;

class Choices{
    public:
        string text = "";
    
        void createOptions(string options){
            text = "1 - ";
            for (int i = 0; i < options.length(); ++i){
                if(options[i] == ','){
                    string space = (options[i + 1] == ' ') ? " -" : " - ";
                    text.append(", " + to_string(i + 1) + space);
                }else{
                    text += options[i];
                }
            }
            return;
        }
        
        void displayOptions(){
            if(text.length() != 0){
                cout << text;
            }else{
                cout << "No options here.";
            }
            return;
        }
};
