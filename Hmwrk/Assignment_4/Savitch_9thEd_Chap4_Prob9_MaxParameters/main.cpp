/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 11:00 PM
 * Purpose: Find max of parameters
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
    float num1,   //First input
          num2,   //Second input
          num3,   //Third input
          maxof2, //Max for 2 Parameters
          maxof3; //Max for 3 Parameters
    
    //Initialize Variables
    cout<<"Enter first number:\n";
    cin>>num1;
    cout<<endl;
    
    cout<<"Enter Second number:\n";
    cin>>num2;
    cout<<endl;
    
    cout<<"Enter third number:\n";
    cin>>num3;
    cout<<endl;
    
    //Map Inputs to Outputs -> Process
    if (num1>num2){
        cout<<"Largest number from two parameter function:\n";
        cout<<fixed<<setprecision(1)<<num1<<endl<<endl;
    }else if (num2>num1){
        cout<<"Largest number from two parameter function:\n";
        cout<<fixed<<setprecision(1)<<num2<<endl<<endl;
    }
    
    if (num1>num2 && num1>3){
        cout<<"Largest number from three parameter function:\n";
        cout<<fixed<<setprecision(1)<<num1<<endl;
    }else if (num2>num1 && num2>3){
        cout<<"Largest number from three parameter function:\n";
        cout<<fixed<<setprecision(1)<<num2<<endl;
    }else if (num3>num1 && num3>2){
        cout<<"Largest number from three parameter function:\n";
        cout<<fixed<<setprecision(1)<<num3<<endl;
    }
    
    //Exit the Program - Cleanup
    return 0;
}


