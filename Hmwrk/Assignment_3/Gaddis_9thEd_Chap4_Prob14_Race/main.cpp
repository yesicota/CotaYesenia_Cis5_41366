/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 17, 2021, 4:09 AM
 * Purpose: Sorting names alphabetically
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int  rn1time,//Time of runner 1
         rn2time,//Time of runner 2
         rn3time;//Time of runner 3
    string name1,//Name of runner 1
           name2,//Name of runner 2
           name3;//Name of runner 3 
    
    //Display Inputs/Outputs
    cout<<"Race Ranking Program\n"
        <<"Input 3 Runners\n"
        <<"Their names, then their times\n";
    cin>>name1;
    cin>>rn1time;
    cin>>name2;
    cin>>rn2time;
    cin>>name3;
    cin>>rn3time;
    
    if (rn1time>0 && rn2time>0 && rn3time>0)
    {
        if (rn1time>rn2time && rn2time>rn3time)
        {
            cout<<name3<<"\t"<<setw(3)<<rn3time<<endl
            <<name2<<"\t"<<setw(3)<<rn2time<<endl
            <<name1<<"\t"<<setw(3)<<rn1time;  
        }
        else if (rn1time>rn3time && rn3time>rn2time){
            cout<<name2<<"\t"<<setw(3)<<rn2time<<endl
            <<name3<<"\t"<<setw(3)<<rn3time<<endl
            <<name1<<"\t"<<setw(3)<<rn1time; 
        }
        else if (rn2time>rn1time && rn1time>rn3time){
            cout<<name3<<"\t"<<setw(3)<<rn3time<<endl
            <<name1<<"\t"<<setw(3)<<rn1time<<endl
            <<name2<<"\t"<<setw(3)<<rn2time; 
        }
        else if (rn2time>rn3time && rn3time>rn1time){
            cout<<name1<<"\t"<<setw(3)<<rn1time<<endl
            <<name3<<"\t"<<setw(3)<<rn3time<<endl
            <<name2<<"\t"<<setw(3)<<rn2time; 
        }
        else if (rn3time>rn2time && rn2time>rn1time){
            cout<<name1<<"\t"<<setw(3)<<rn1time<<endl
            <<name2<<"\t"<<setw(3)<<rn2time<<endl
            <<name3<<"\t"<<setw(3)<<rn3time; 
        }
        else if (rn3time>rn1time && rn1time>rn2time){
            cout<<name2<<"\t"<<setw(3)<<rn2time<<endl
            <<name1<<"\t"<<setw(3)<<rn1time<<endl
            <<name3<<"\t"<<setw(3)<<rn3time;
        }
    }
    else if (rn1time<=0 || rn2time<=0 || rn3time<=0)
    {
        cout<<"ERROR! Time cannot be a negative value.";
    }
    //Exit the Program - Cleanup
    return 0;
}


