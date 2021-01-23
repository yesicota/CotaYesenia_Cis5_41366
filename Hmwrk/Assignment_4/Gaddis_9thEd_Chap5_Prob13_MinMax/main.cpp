/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 9:15 AM
 * Purpose: Display largest and smallest numbers using a loop
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
    short num,       //Inputted numbers
          min,       //Smallest number
          max,       //Largest number
          end = -99; //Signal to end series
    
    //Initialize Variables
    cin>>num;
    min = max = num;
    
    //Map Inputs to Outputs -> Process
    while (num != -99){
        if (num < min)
            min=num;
        if (num > max)
            max=num; 
        cin>>num;
        }
    
    //Display Outputs
    cout<<"Smallest number in the series is"<<setw(2)<<min<<endl;
    cout<<"Largest  number in the series is"<<setw(2)<<max; 
    
    //Exit the Program - Cleanup
    return 0;
}


