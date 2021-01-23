/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 17, 2021, 2:39 AM
 * Purpose: Display bank's service fees given a balance and number of checks
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    short int check;     //Number of checks
    float     blnc,      //Current bank balance
              mntFee=10, //Monthly fee
              lwBlnc,    //Low Balance fee 
              nwBlnc,    //Final Balance  
              chkFee;    //Check fee
    
    cout<<"Monthly Bank Fees\n";
    cout<<"Input Current Bank Balance and Number of Checks\n";
    cin>>blnc>>check;
    
    if (blnc<0)
        cout<<"URGENT MESSAGE: ACCOUNT IS OVERDRAWN\n";  
    
    if (check>0 && check<20){
        chkFee=check*0.1;
    }else if (check>=20 && check<40){
        chkFee=check*0.08;
    }else if (check>=40 && check<60){
        chkFee=check*0.06;
    }else if (check>=60){
        chkFee=check*0.04;
    }
    
    if (blnc<400)
        lwBlnc=15;
    else 
        lwBlnc=0;
    
    
    nwBlnc = blnc - mntFee - chkFee - lwBlnc;
            
        //Outputs
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"Balance     $"<<setw(9)<<blnc<<endl;
        cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
        cout<<"Monthly Fee $"<<setw(9)<<mntFee<<endl;
        cout<<"Low Balance $"<<setw(9)<<lwBlnc<<endl;
        cout<<"New Balance $"<<setw(9)<<nwBlnc;
    
    //Exit the Program - Cleanup
    return 0;
}


