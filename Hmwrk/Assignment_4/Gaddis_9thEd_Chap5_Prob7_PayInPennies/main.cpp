/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 4:06 AM
 * Purpose: Calculate salary of increasing pennies
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short days, //Number of Days Worked
        penny = 1,
        total = 0;   
    
    //Initialize Variables
    cin>>days;
    
    //Input Validation
    while (days <= 0){   
        cout<<"Cannot accept a number less than 1 for number of days worked.\n";
        cin>>days;
    }
    
    for(int count=0; count < days; count++){
        total += penny;
        penny *= 2;
    }
    cout<<"Pay = $"<<total/100<<".";
    if ((total%100)<10){
        cout<<"0"<<total%100;
    }else if ((total%100)>=10){
        cout<<total%100;
    }
    //Exit the Program - Cleanup
    return 0;
}


