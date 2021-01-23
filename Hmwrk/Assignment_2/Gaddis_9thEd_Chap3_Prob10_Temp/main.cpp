/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 12, 2021, 9:20PM
 * Purpose:  Convert Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float cel, //Celsius
          far; //Fahrenheit 
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Temperature Converter\n";
    cout<<"Input Degrees Fahrenheit\n";
    cin>>far;
    cel=(far-32)*5/9;
    
    //Display the outputs
    cout<<fixed<<setprecision(1);
    cout<<far<<" Degrees Fahrenheit = "
            <<cel<<" Degrees Centigrade";
    //Exit stage right or left!
    return 0;
}