/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 17, 2019, 11:52 PM
 * Purpose:  Calculate monthly bill for internet service
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
    short int  hrs,     //Hours used
               avlbHrs, //Hours provided for each package
               addHrs;  //Pay rate for additional hours
    char pkg;           //Package type
    float     mnthBill, //Monthly Bill
              mnthPkg;  //Monthly base charge for package
    
    //Display the outputs
    cout<<"ISP Bill\n";
    cout<<"Input Package and Hours\n";
    cin>>pkg>>hrs;
    
    switch(pkg)
    {
        case'A':
            mnthPkg=9.95;
            avlbHrs=10;
            addHrs=2;
            break;
        case 'B':
            mnthPkg=14.95;
            avlbHrs=20;
            addHrs=1;
            break;
        case 'C':
            mnthPkg=19.95;
            avlbHrs=0;
            addHrs=0;
            break;
        default:
            cout<<"You did not enter A, B, or C\n";
    }
    if (hrs>avlbHrs){
        mnthBill=mnthPkg+(hrs-avlbHrs)*addHrs;
    }else if (hrs<=avlbHrs)
        mnthBill=mnthPkg;
    
    if (hrs>744)
        cout<<"Number of hours cannot exceed over 744\n";
    
    cout<<"Bill = $"<<fixed<<setprecision(2)<<setw(6)<<mnthBill;
    //Exit stage right or left!
    return 0;
}