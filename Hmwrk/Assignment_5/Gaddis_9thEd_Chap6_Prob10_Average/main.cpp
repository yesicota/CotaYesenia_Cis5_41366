/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 25, 2021, 10:03 AM
 * Purpose: Calculate average of test scores
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void getScre(int&,int&,int&,int&,int&);
void avg(int, int, int, int, int);
int low(int, int, int, int, int);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int num1,
        num2,
        num3,
        num4,
        num5;
    
    //Initialize Variables
    cout<<"Find the Average of Test Scores"<<endl;
    cout<<"by removing the lowest value."<<endl;
    getScre(num1, num2, num3, num4, num5);
    avg(num1, num2, num3, num4, num5);
    
    //Map Inputs to Outputs -> Process
    
    //Display Inputs/Outputs
    
    //Exit the Program - Cleanup
    return 0;
}
void getScre(int& num1, int& num2, int& num3, int& num4, int& num5){
    cout<<"Input the 5 test scores.\n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
}

void avg(int num1,int num2,int num3,int num4,int num5){
    float averg = num1 + num2 + num3 + num4 + num5 - low(num1, num2, num3, num4, num5);
    averg /= 4;
    cout<<"The average test score = "<<setprecision(1)<<fixed<<averg;
}

int low(int num1,int num2,int num3,int num4,int num5){
    if (num1<num2 && num1<num3 && num1<num4 && num1<num5){
        return num1;
    }
    if (num2<num1 && num2<num3 && num2<num4 && num2<num5){
        return num2;
    }
    if (num3<num2 && num3<num1 && num3<num4 && num3<num5){        
        return num3;
    }
    if (num4<num2 && num4<num3 && num4<num2 && num4<num5){
        return num4;
    }
    if (num5<num2 && num5<num3 && num5<num4 && num5<num1){
        return num5;
    }
}