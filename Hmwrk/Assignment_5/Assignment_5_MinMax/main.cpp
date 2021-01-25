/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 4, 2021, 5:33 PM
 * Purpose: Input integers and returns min and max
 */

//System Libraries
#include <iostream>  //I/O Library
#include <iomanip>   //Formatting
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
void minmax(int,int,int);//Function to find the min and max

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int num1,//Integer One
        num2,//Integer Two
        num3,//Integer Three
        min, //Minimum of Integers
        max; //Maximum of Integers
    
    //Initialize Variables
    cout<<"Input 3 numbers\n";
    cin>>num1>>num2>>num3;
    
    minmax(num1, num2, num3);
    
    //Exit the Program - Cleanup
    return 0;
}

void minmax(int num1, int num2, int num3){
    if (num1 > num2 && num2 > num3){
        cout<<"Min = "<<num3<<endl;
        cout<<"Max = "<<num1;
    }else if (num1 > num3 && num3 > num2){
        cout<<"Min = "<<num2<<endl;
        cout<<"Max = "<<num1;
    }else if (num2 > num1 && num1 > num3){
        cout<<"Min = "<<num3<<endl;
        cout<<"Max = "<<num2;
    }else if (num2 > num3 && num3 > num1){
        cout<<"Min = "<<num1<<endl;
        cout<<"Max = "<<num2;
    }else if (num3 > num1 && num1 > num2){
        cout<<"Min = "<<num2<<endl;
        cout<<"Max = "<<num3;
    }else if (num3 > num2 && num2 > num1){
        cout<<"Min = "<<num1<<endl;
        cout<<"Max = "<<num3;
    }else if (num1 == num2 && num3 > num1){
        cout<<"Min = "<<num1<<endl;
        cout<<"Max ="<<num3;
    }else if (num3 == num2 && num1 > num3){
        cout<<"Min = "<<num3<<endl;
        cout<<"Max = "<<num1;
    }else if (num1 == num3 && num2 > num1){
        cout<<"Min = "<<num1<<endl;
        cout<<"Max = "<<num2;
    }else if (num1 == num2 && num1 > num3){
        cout<<"Min = "<<num3<<endl;
        cout<<"Max = "<<num1;
    }else if (num1 == num3 && num3 > num2){
        cout<<"Min = "<<num2<<endl;
        cout<<"Max = "<<num3;
    }else if (num3 == num2 && num1 > num3){
        cout<<"Min = "<<num3<<endl;
        cout<<"Max = "<<num1;
    }else if (num3 == num2 && num1 == num3){
        cout<<"Min = "<<num1<<endl;
        cout<<"Max = "<<num1;
    }
       
}
