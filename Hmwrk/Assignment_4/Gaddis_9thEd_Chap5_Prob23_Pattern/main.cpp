/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 7:36 PM
 * Purpose: Display a pattern using loops
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short input; //Input of 10
    
    //Initialize Variables
    cin>>input;
    
    //Map Inputs to Outputs -> Process
    for (int x = 0; x < input; ++x){
        for (int y = 0; y <= x; ++y){
            cout << "+";
        }
        cout << endl << endl;
    }
    
    for (int x = input; x >=2 ; --x){
        for (int y = 1; y <= x; ++y){
          cout << "+";  
        }
        cout << endl << endl;
    }
    cout<<"+";
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


