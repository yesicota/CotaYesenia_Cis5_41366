/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 26, 2021, 8:27 PM
 * Purpose: Convert 24 hr to 12 hr
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
int input(int &, char, int &, bool &);
int convrt(int &, int &, char &);
int output(int &, int &, int &, char &);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int hr,
        hr12,
        min;
    char c = ':',
         ampm,
         choice;
    bool valid;
    
    //Initialize Variables
    
    //Map Inputs to Outputs -> Process
    cout<<"Military Time Converter to Standard Time\n";
    cout<<"Input Military Time hh:mm\n";
    
    //Display Inputs/Outputs
    do{
    input(hr, c, min, valid);
    if (valid = true){
        convrt(hr, hr12, ampm)<< output(hr, min, hr12, ampm);
    }
        
    cout<<"Would you like to convert another time (y/n)"<<endl;
    cin>>choice;

    }while (choice == 'y' || choice == 'Y');
    
    //Exit the Program - Cleanup
    return 0;
}

int input (int &hr, char c, int &min, bool &valid){
    valid = true;
    cin>>hr>>c>>min;
    if (hr > 24 || min > 59){
        cout << hr <<":"<<min<<" is not a valid time"<<endl;
        valid = false;
    }
}

int convrt(int &hr, int &hr12, char &ampm){
    if (hr == 0){
        hr12 = 12;
        ampm = 'A';
    }else if (hr == 12){
        hr12 = 12;
        ampm = 'P';
    }else if (hr >=13){
        hr12 = hr - 12;
        ampm = 'P';
    }else if (hr < 12){
        hr12 = hr;
        ampm = 'A';
    }    
}

int output(int &hr, int &min, int &hr12, char &ampm){
    string hf;
    if (ampm == 'A'){
        hf = " AM";
    }
    if (ampm == 'P'){
        hf = " PM";
    }
    if (hr == 0){
        cout<<"00:"<<min<<" = ";
        cout<<hr12<<":"<<min<<hf<<endl;
    }else if(hr > 0 && hr <= 24 && min < 59){
        cout<<hr<<":"<<min<<" = "<<hr12<<":"<<min<<hf<<endl;
    }
    else {
        
    }
}