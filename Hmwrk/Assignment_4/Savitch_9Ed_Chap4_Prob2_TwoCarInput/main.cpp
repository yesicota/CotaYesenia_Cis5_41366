/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 8:12 PM
 * Purpose: Read liters of gas and miles traveled and output
 *          number of miles per gallon car delivered
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
float CNVGAL=0.264179f;//Conversion from liters to gallons

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short ltrs, //Liters of gas
          mls;  //Miles Driven
    float mpg;  //Miles per gallon
    char  chce; //Choice
    
    //Map Inputs to Outputs -> Process
    do {
        //Initialize Variables
        cout<<"Enter number of liters of gasoline:\n";
        cin>>ltrs;
        cout<<endl;
        cout<<"Enter number of miles traveled:\n";
        cin>>mls;
        cout<<endl;
        
        mpg=mls/(ltrs*CNVGAL);
        
        cout<<"miles per gallon:\n"<<fixed<<setprecision(2);
        cout<<mpg<<endl;
        cout<<"Again:\n";
        cin>>chce;
        if (chce == 'y' || chce == 'Y'){
            cout<<endl;
        }
    }while (chce == 'y' || chce == 'Y');
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}


