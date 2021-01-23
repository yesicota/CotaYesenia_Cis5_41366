/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 17, 2021, 2:16 AM
 * Purpose: Display number of points earned to book club customers
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
    short int book;
    
    cout<<"Book Worm Points\n";
    cout<<"Input the number of books purchased this month.\n";
    cin>>book;
    
    if (book==0){
        cout<<"Books purchased ="<<setw(3)<<book<<endl;
        cout<<"Points earned   =  0";
    }
    else if (book==1){
        cout<<"Books purchased ="<<setw(3)<<book<<endl;
        cout<<"Points earned   =  5";
    }
    else if (book==2){
        cout<<"Books purchased ="<<setw(3)<<book<<endl;
        cout<<"Points earned   = 15";
    }
    else if (book==3){
        cout<<"Books purchased ="<<setw(3)<<book<<endl;
        cout<<"Points earned   = 30";
    }
    else if (book==4 || book>4){
        cout<<"Books purchased ="<<setw(3)<<book<<endl;
        cout<<"Points earned   = 60";
    }
    //Exit the Program - Cleanup
    return 0;
}


