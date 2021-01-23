 /* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 118, 2021, 3:14 AM
 * Purpose:  Arabic Number to Roman Numerals
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants - No Global Variables
//Only Universal Constants, Math, Physics, Conversions, Higher Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variable Data Types and Constants
    unsigned short n2Cnvrt;//Number to be converted
    unsigned char  n1000,  //How many 1000's
                   n100,   //How many 100's
                   n10,    //How many 10's
                   n1;     //How many 1's
    
    //Initialize Variables
    cout<<"Arabic to Roman numeral conversion.\n";
    cout<<"Input the integer to convert.\n";
    cin>>n2Cnvrt;
    
    if(n2Cnvrt>=1000&&n2Cnvrt<=3000){
    //Process or map Inputs to Outputs
    cout<<n2Cnvrt<<" is equal to ";
     
        //Determine 1000's, 100's, 10's, 1's
        n1000=n2Cnvrt/1000;
        n100=(n2Cnvrt-n1000*1000)/100;
        n10=(n2Cnvrt-n1000*1000-n100*100)/10;
        n1=n2Cnvrt%10;
        
        //Output the number of 1000's in Roman Numerals
        switch(n1000){
            case 3:cout<<'M';
            case 2:cout<<'M';
            case 1:cout<<'M';
        }
        
        //Output the number of 100's
        cout<<(n100==9?"CM":
               n100==8?"DCCC":
               n100==7?"DCC":
               n100==6?"DC":
               n100==5?"D":
               n100==4?"CD":
               n100==3?"CCC":
               n100==2?"CC":
               n100==1?"C":"");
        
        //Output the number of 10's
        if(n10==9)cout<<"XC";
        if(n10==8)cout<<"LXXX";
        if(n10==7)cout<<"LXX";
        if(n10==6)cout<<"LX";
        if(n10==5)cout<<"L";
        if(n10==4)cout<<"XL";
        if(n10==3)cout<<"XXX";
        if(n10==2)cout<<"XX";
        if(n10==1)cout<<"X";
        
        //Output the number of 1's
        if(n1==9)cout<<"IX";
        else if(n1==8)cout<<"VIII";
        else if(n1==7)cout<<"VII";
        else if(n1==6)cout<<"VI";
        else if(n1==5)cout<<"V";
        else if(n1==4)cout<<"IV";
        else if(n1==3)cout<<"III";
        else if(n1==2)cout<<"II";
        else if(n1==1)cout<<"I";
       
                
    //The Path to Exit
    }else{
        cout<<n2Cnvrt<<" is Out of Range!";
    }

    //Exit stage right!
    return 0;
}

