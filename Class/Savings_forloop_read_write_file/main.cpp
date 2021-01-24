/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 12:42 AM
 * Purpose: Savings
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Input/output library
#include <fstream>   //File Stream Library
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
    fstream in,out;
    string  inFlNm;
    float   pv,          //Present Value in $
            fv,           //Future Value in $ 
            intRate;       //Interest Rate in Decimal
    int     numCmpd;      //Number of compounding periods in years
    
    //Initialize Variables
    inFlNm="svInput.dat";
    char outFlNm[]="svOutput.dat";
    in.open(inFlNm,ios::in);
    out.open(outFlNm,ios::out);
    in>>pv;
    in>>intRate;
    numCmpd=73/(intRate*CNVPRCT);//By the Rule of 72
    fv=pv;                       //Initialize future savings
    
    //Display the headings
    out<<fixed<<setprecision(2)<<showpoint;
    out<<"The Present Value = $"<<pv<<endl;
    out<<"The Interest Rate = "<<intRate*CNVPRCT<<"%"<<endl;
    out<<"Number of years = "<<numCmpd<<endl;
    out<<"Count  Year  Savings  Interest"<<endl;
    
    //Calculate and Display the Table as you go
    for(int count=0, years=2021;count<=numCmpd;count++,years++){
        float interest=(fv*intRate);
        out<<setw(3)<<count<<setw(8)<<years<<setw(9)<<fv
                <<setw(9)<<interest<<endl;
        fv=fv*(1+intRate);
    }
    //Exit the Program - Cleanup
    in.close();
    out.close();
    return 0;
}


