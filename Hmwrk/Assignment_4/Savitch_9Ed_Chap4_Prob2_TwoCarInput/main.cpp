/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 8:48 PM
 * Purpose: Read liters of gas and miles traveled and output
 *          number of miles per gallon for two cars
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
    short ltrs1,//Liters of gas for Car 1
          mls1, //Miles Driven for Car 1
          ltrs2,//Liters of gas for Car 2
          mls2; //Miles Driven for Car 2
    float mpg1, //Miles per gallon for Car 1
          mpg2; //Miles per gallon for Car 2
    char  chce; //Choice
    
    //Map Inputs to Outputs -> Process
    do {
        //Initialize Variables
        cout<<"Car 1\n";
        cout<<"Enter number of liters of gasoline:\n";
        cin>>ltrs1;
        cout<<"Enter number of miles traveled:\n";
        cin>>mls1;
        
        mpg1=mls1/(ltrs1*CNVGAL);
        
        cout<<"miles per gallon: "<<fixed<<setprecision(2);
        cout<<mpg1<<endl<<endl;
        
        cout<<"Car 2\n";
        cout<<"Enter number of liters of gasoline:\n";
        cin>>ltrs2;
        cout<<"Enter number of miles traveled:\n";
        cin>>mls2;
        
        mpg2=mls2/(ltrs2*CNVGAL);
        
        cout<<"miles per gallon: "<<fixed<<setprecision(2);
        cout<<mpg2<<endl<<endl;
        
        if (mpg1>mpg2){
            cout<<"Car 1 is more fuel efficient"<<endl<<endl;
        }if (mpg2>mpg1){
            cout<<"Car 2 is more fuel efficient"<<endl<<endl;
        }
                
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


