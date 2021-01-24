/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 10:24 PM
 * Purpose: Calculate rate of inflation
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
    float prcTdy, //Price of item today
          prcPrv, //Price of item one year ago
          infRt;  //Inflation Rate
    char  choice; 
    
    //Map Inputs to Outputs -> Process
    do {
        cout<<"Enter current price:\n";
        cin>>prcTdy;
        cout<<"Enter year-ago price:\n";
        cin>>prcPrv;
        
        infRt= (prcTdy - prcPrv)/prcPrv;
        
        cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infRt*100<<"%\n\n";
        
        cout<<"Again:\n";
        cin>>choice;
        if (choice == 'y' || choice == 'Y'){
            cout<<endl;
        }
    }while (choice == 'y' || choice == 'Y');
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


