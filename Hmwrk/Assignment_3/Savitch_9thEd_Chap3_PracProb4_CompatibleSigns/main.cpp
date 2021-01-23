/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 18, 2021, 2:33 AM
 * Purpose:  Find whether horoscope signs are compatible
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    string sign1, //Horoscope sign of person one
           sign2; //Horoscope sign of person two  
    
    //Display the outputs
    cout<<"Horoscope Program which examines compatible signs.\n"
        <<"Input 2 signs.\n";
    cin>>sign1>>sign2;
    
    if (sign1 == "Taurus" && sign2 == "Taurus" || 
            sign1 == "Taurus" && sign2 == "Virgo" || 
            sign1 == "Taurus" && sign2 == "Capricorn" ||
            sign1 == "Capricorn" && sign2 == "Capricorn" ||
            sign1 == "Capricorn" && sign2 == "Taurus" ||
            sign1 == "Capricorn" && sign2 == "Virgo" ||
            sign1 == "Virgo" && sign2 == "Virgo" ||
            sign1 == "Virgo" && sign2 == "Taurus" ||
            sign1 == "Virgo" && sign2 == "Capricorn"){
        cout<<sign1<<" and "<<sign2<<" are compatible Earth signs.";
    }else if (sign1 == "Aries" && sign2 == "Aries" || 
            sign1 == "Aries" && sign2 == "Leo" || 
            sign1 == "Aries" && sign2 == "Sagittarius" ||
            sign1 == "Sagittarius" && sign2 == "Sagittarius" ||
            sign1 == "Sagittarius" && sign2 == "Leo" ||
            sign1 == "Sagittarius" && sign2 == "Aries" ||
            sign1 == "Leo" && sign2 == "Leo" ||
            sign1 == "Leo" && sign2 == "Sagittarius" ||
            sign1 == "Leo" && sign2 == "Aries"){
        cout<<sign1<<" and "<<sign2<<" are compatible Fire signs.";
    }else if (sign1 == "Gemini" && sign2 == "Gemini" || 
            sign1 == "Gemini" && sign2 == "Libra" || 
            sign1 == "Gemini" && sign2 == "Aquarius" ||
            sign1 == "Libra" && sign2 == "Libra" ||
            sign1 == "Libra" && sign2 == "Gemini" ||
            sign1 == "Libra" && sign2 == "Aquarius" ||
            sign1 == "Aquarius" && sign2 == "Aquarius" ||
            sign1 == "Aquarius" && sign2 == "Gemini" ||
            sign1 == "Aquarius" && sign2 == "Libra"){
        cout<<sign1<<" and "<<sign2<<" are compatible Air signs.";
    }else if (sign1 == "Cancer" && sign2 == "Cancer" || 
            sign1 == "Cancer" && sign2 == "Scorpio" || 
            sign1 == "Cancer" && sign2 == "Aquarius" ||
            sign1 == "Scorpio" && sign2 == "Scorpio" ||
            sign1 == "Scorpio" && sign2 == "Cancer" ||
            sign1 == "Scorpio" && sign2 == "Pisces" ||
            sign1 == "Pisces" && sign2 == "Pisces" ||
            sign1 == "Pisces" && sign2 == "Cancer" ||
            sign1 == "Pisces" && sign2 == "Scorpio"){
        cout<<sign1<<" and "<<sign2<<" are compatible Water signs.";
    }else
        cout<<sign1<<" and "<<sign2<<" are not compatible signs.";
    
    
    //Exit stage right or left!
    return 0;
}