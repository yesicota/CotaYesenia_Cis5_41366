/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 17, 2021, 12:39 AM
 * Purpose: 
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
    string name1, //First name
           name2, //Second name
           name3; //Third name
    
    //Initialize Variables
        
    //Map Inputs to Outputs -> Process   
    
    //Display Inputs/Outputs
    cout<<"Sorting Names\n";
    cout<<"Input 3 names\n";
    cin>>name1;
    cin>>name2;
    cin>>name3;
    
    if (name1>name2 && name2>name3)
        cout<<name3<<endl<<name2<<endl<<name1;
    else if (name1>name3 && name3>name2)
        cout<<name2<<endl<<name3<<endl<<name1;
    else if (name2>name3 && name3>name1)
        cout<<name1<<endl<<name3<<endl<<name2;
    else if (name2>name1 && name1>name3)
        cout<<name3<<endl<<name1<<endl<<name2;
    else if (name3>name1 && name1>name2)
        cout<<name2<<endl<<name1<<endl<<name3;
    else if (name3>name2 && name2>name1)
        cout<<name1<<endl<<name2<<endl<<name3;
    //Exit the Program - Cleanup
    return 0;
}


