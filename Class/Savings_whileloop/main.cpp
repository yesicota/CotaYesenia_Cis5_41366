/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 12:42 AM
 * Purpose: Savings
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Input/output library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVPRCT=100;//Percent Conversion
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    float pv=100.0f,    //Present Value in $
          fv,           //Future Value in $ 
          intRate=0.06f;//Interest Rate in Decimal
    int   numCmpd;      //Number of compounding periods in years
    
    //Initialize Variables
    numCmpd=73/(intRate*CNVPRCT);//By the Rule of 72
    fv=pv;                       //Initialize future savings
    
    //Display the headings
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The Present Value = $"<<pv<<endl;
    cout<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    cout<<"Number of years = "<<numCmpd<<endl;
    cout<<"Count  Year  Savings  Interest"<<endl;
    
    //Calculate and Display the Table as you go
    int count=0, years=2021;
    while(count<=numCmpd){
        float interest=(fv*intRate);
        cout<<setw(3)<<count<<setw(8)<<years<<setw(9)<<fv
                <<setw(9)<<interest<<endl;
        fv=fv*(1+intRate);
        years++;
        count++;
    }
    //Exit the Program - Cleanup
    return 0;
}


