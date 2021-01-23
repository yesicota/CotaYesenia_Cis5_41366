/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 9:48 AM
 * Purpose: Display a rectangle by inputting an integer
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
    unsigned short input; //Positive integer no greater than 15
    char  letter;//Character to display on rectangle        
    
    //Initialize Variables
    cin>>input;
    cin>>letter;
    
    //Display Outputs
    if (input >= 15){
        cout<<"Only input a positive integer no greater than 15.\n";
        cin>>input;
        cin>>letter;
    }   for(short x=0; x < input-1; x++){
            for(short y=0; y < input-1; y++){
            cout<<letter;
        }cout<<letter<<endl;
        }for (short z=0; z <input; z++){
            cout<<letter;
    }

    
    //Exit the Program - Cleanup
    return 0;
}


