/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 15, 2021, 5:40 PM
 * Purpose: Calculate retroactive salary
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting 
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float prevSal, //Previous Annual Salary
          retPay,  //Retroactive Pay(7.6% for 6 months)
          newASal, //New Annual Salary
          newMSal; //New Monthly Salary
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    cout<<"Input previous annual salary.\n";
    cin>>prevSal;
    retPay=(prevSal*0.076)/2;
    cout<<"Retroactive pay    = $"
            <<fixed<<setprecision(2)<<setw(7)<<retPay<<endl;
    newASal=prevSal + (2*retPay);
    newMSal=newASal/12;
    cout<<"New annual salary  = $"<<setw(7)<<newASal<<endl;
    cout<<"New monthly salary = $"<<setw(7)<<newMSal;
    
    //Exit the Program - Cleanup
    return 0;
}


