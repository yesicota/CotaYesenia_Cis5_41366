/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 12, 2021, 9:37PM
 * Purpose:  Display sine, cosine, and tangent of an angle
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI=4*atan(1);
const float CNVRAD=PI/180; //Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int   angle;  //Angle in degrees
    float radian; //Angle in radians
    
    //Initialize or input i.e. set variable values
    
    //Map inputs -> outputs
    cout<<"Calculate trig functions\n";
    cout<<"Input the angle in degrees.\n";
    cin>>angle;
    
    radian=angle*CNVRAD;
    
    //Display the outputs
    cout<<setprecision(4)<<fixed<<showpoint;
    cout<<"sin("<<angle<<") = "<<sin(radian)<<endl;
    cout<<"cos("<<angle<<") = "<<cos(radian)<<endl;
    cout<<"tan("<<angle<<") = "<<tan(radian);
    
    //Exit stage right or left!
    return 0;
}