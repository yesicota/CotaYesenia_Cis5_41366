/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 15, 2021, 1:06 PM
 * Purpose: Ratio, Conversion, Dieter Question
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting Library
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time Library to set the random number seed
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays
const int CNVENGM=453.592; //Lbs to Grams
//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    float massMs=35,  //Mass of the Mouse 35 grams
          massKms=5,   //Mass to kill the mouse of sweetener
          mssCoke=350, //Mass of 1 can of Diet Coke  
          cncnt=0.001f,//Concentration of sweetener in a can of diet coke
          wDietr;      //Weight of the Dieter 
    int nCans;         //Number of cans of Diet Coke
    
    //Initialize Variables
    wDietr=rand()%(350-90+1)+90; //Range from 90 to 350
    
    //Map Inputs to Outputs -> Process
    nCans=(massKms*wDietr*CNVENGM)/(massMs*mssCoke*cncnt)+1;
    
    //Display Inputs/Outputs
    cout<<"The maximum number of cans of coke = "<<nCans<<" that an individual"
            <<" weighing "<<wDietr<<" lbs can drink"<<endl;
    //Exit the Program - Cleanup
    return 0;
}


