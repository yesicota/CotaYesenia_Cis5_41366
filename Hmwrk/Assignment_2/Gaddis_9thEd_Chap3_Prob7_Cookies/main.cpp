/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 12, 2021, 8:20PM
 * Purpose:  Calculate total calories consumed
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    unsigned short cookie,  //Number of cookies eaten
                   bag,     //Number of cookies in a bag
                   serv,    //Number of servings in a bag
                   calSrv,  //Number of calories in one serving
                   calCok,  //Calories per cookie
                   tltCal;  //Total calories consumed
    
    //Initialize or input i.e. set variable values
    bag=40;
    serv=10;
    calSrv=300;
    calCok=(serv*calSrv)/bag;
    
    //Map inputs -> outputs
    cout<<"Calorie Counter\n";
    cout<<"How many cookies did you eat?\n";
    cin>>cookie;
    tltCal=calCok*cookie;
    
    //Display the outputs
    cout<<"You consumed "<<tltCal<<" calories.";
    //Exit stage right or left!
    return 0;
}