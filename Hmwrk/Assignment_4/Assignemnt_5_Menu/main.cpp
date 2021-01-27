/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 23, 2021, 11:21 PM
 * Purpose: Menu for Assignment 4
 */

//System Level Libraries
#include <iostream>
#include <iomanip>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
float CNVGAL=0.264179f;//Conversion from liters to gallons
//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu for Homework"<<endl;
    cout<<"Type 1 for Gaddis Sum of Integers Problem"<<endl;
    cout<<"Type 2 for Gaddis Rectangle Problem"<<endl;
    cout<<"Type 3 for Gaddis Min and Max Problem"<<endl;
    cout<<"Type 4 for Gaddis Penny Salary Problem"<<endl;
    cout<<"Type 5 for Gaddis Pattern Problem"<<endl;
    cout<<"Type 6 for Savitch One Car Mileage Problem"<<endl;
    cout<<"Type 7 for Savtich Two Car Mileage Problem"<<endl;
    cout<<"Type 8 for Savitch Rate of Inflation Problem"<<endl;
    cout<<"Type 9 for Savitch Predicted Price Problem"<<endl;
    cout<<"Type 10 for Savitch Max of Parameters Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
        //Declare Variables
        int inpInt,   //Inputted Integer
            sumInt=0; //Sum of all integers from 1 to inpInt

        //Display Inputs
        cin>>inpInt;

        //Map Inputs->Outputs
        for (int count = 0; count <= inpInt; count++)
        {
            sumInt += count;
        }
        //Display Outputs
        cout<<"Sum = "<<sumInt;

        //Exit the Program - Cleanup
    }else if(choice=='2'){
        //Declare Variables
        unsigned short input; //Positive integer no greater than 15
        char  letter;//Character to display on rectangle        

        //Initialize Variables
        cin>>input;
        cin>>letter;

        //Display Outputs
        if (input >= 15){
            cout<<"Only input a positive integer no greater than 15.\n";
            cin>>input;
            cin>>letter;
        }   for(short x=0; x < input-1; x++){
                for(short y=0; y < input-1; y++){
                cout<<letter;
            }cout<<letter<<endl;
            }for (short z=0; z <input; z++){
                cout<<letter;
        }
        //Exit the Program - Cleanup
    }else if(choice=='3'){
        //Declare Variables
        short num,       //Inputted numbers
              min,       //Smallest number
              max,       //Largest number
              end = -99; //Signal to end series

        //Initialize Variables
        cin>>num;
        min = max = num;

        //Map Inputs to Outputs -> Process
        while (num != -99){
            if (num < min)
                min=num;
            if (num > max)
                max=num; 
            cin>>num;
            }

        //Display Outputs
        cout<<"Smallest number in the series is"<<setw(2)<<min<<endl;
        cout<<"Largest  number in the series is"<<setw(2)<<max; 

        //Exit the Program - Cleanup
    }else if(choice=='4'){
        //Declare Variables
        short days, //Number of Days Worked
            penny = 1,
            total = 0;   

        //Initialize Variables
        cin>>days;

        //Input Validation
        while (days <= 0){   
            cout<<"Cannot accept a number less than 1 for number of days worked.\n";
            cin>>days;
        }

        for(int count=0; count < days; count++){
            total += penny;
            penny *= 2;
        }
        cout<<"Pay = $"<<total/100<<".";
        if ((total%100)<10){
            cout<<"0"<<total%100;
        }else if ((total%100)>=10){
            cout<<total%100;
        }
        //Exit the Program - Cleanup
    }else if(choice=='5'){
        //Declare Variables
        short input; //Input of 10

        //Initialize Variables
        cin>>input;

        //Map Inputs to Outputs -> Process
        for (int x = 0; x < input; ++x){
            for (int y = 0; y <= x; ++y){
                cout << "+";
            }
            cout << endl << endl;
        }

        for (int x = input; x >=2 ; --x){
            for (int y = 1; y <= x; ++y){
              cout << "+";  
            }
            cout << endl << endl;
        }
        cout<<"+";
        //Display Inputs/Outputs

        //Exit the Program - Cleanup
    }else if(choice=='6'){
        //Declare Variables
        short ltrs, //Liters of gas
              mls;  //Miles Driven
        float mpg;  //Miles per gallon
        char  chce; //Choice

        //Map Inputs to Outputs -> Process
        do {
            //Initialize Variables
            cout<<"Enter number of liters of gasoline:\n";
            cin>>ltrs;
            cout<<endl;
            cout<<"Enter number of miles traveled:\n";
            cin>>mls;
            cout<<endl;

            mpg=mls/(ltrs*CNVGAL);

            cout<<"miles per gallon:\n"<<fixed<<setprecision(2);
            cout<<mpg<<endl;
            cout<<"Again:\n";
            cin>>chce;
            if (chce == 'y' || chce == 'Y'){
                cout<<endl;
            }
        }while (chce == 'y' || chce == 'Y');
        //Display Inputs/Outputs

        //Exit the Program - Cleanup
    }else if(choice=='7'){
        //Declare Variables
        short ltrs1,//Liters of gas for Car 1
              mls1, //Miles Driven for Car 1
              ltrs2,//Liters of gas for Car 2
              mls2; //Miles Driven for Car 2
        float mpg1, //Miles per gallon for Car 1
              mpg2; //Miles per gallon for Car 2
        char  chce; //Choice

        //Map Inputs to Outputs -> Process
        do {
            //Initialize Variables
            cout<<"Car 1\n";
            cout<<"Enter number of liters of gasoline:\n";
            cin>>ltrs1;
            cout<<"Enter number of miles traveled:\n";
            cin>>mls1;

            mpg1=mls1/(ltrs1*CNVGAL);

            cout<<"miles per gallon: "<<fixed<<setprecision(2);
            cout<<mpg1<<endl<<endl;

            cout<<"Car 2\n";
            cout<<"Enter number of liters of gasoline:\n";
            cin>>ltrs2;
            cout<<"Enter number of miles traveled:\n";
            cin>>mls2;

            mpg2=mls2/(ltrs2*CNVGAL);

            cout<<"miles per gallon: "<<fixed<<setprecision(2);
            cout<<mpg2<<endl<<endl;

            if (mpg1>mpg2){
                cout<<"Car 1 is more fuel efficient"<<endl<<endl;
            }if (mpg2>mpg1){
                cout<<"Car 2 is more fuel efficient"<<endl<<endl;
            }

            cout<<"Again:\n";
            cin>>chce;
            if (chce == 'y' || chce == 'Y'){
                cout<<endl;
            }
        }while (chce == 'y' || chce == 'Y');
        //Display Inputs/Outputs

        //Exit the Program - Cleanup
    }else if(choice=='8'){
        //Declare Variables
        float prcTdy, //Price of item today
              prcPrv, //Price of item one year ago
              infRt;  //Inflation Rate
        char  choice; 

        //Map Inputs to Outputs -> Process
        do {
            cout<<"Enter current price:\n";
            cin>>prcTdy;
            cout<<"Enter year-ago price:\n";
            cin>>prcPrv;

            infRt= (prcTdy - prcPrv)/prcPrv;

            cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infRt*100<<"%\n\n";

            cout<<"Again:\n";
            cin>>choice;
            if (choice == 'y' || choice == 'Y'){
                cout<<endl;
            }
        }while (choice == 'y' || choice == 'Y');

        //Display Inputs/Outputs

        //Exit the Program - Cleanup
    }else if(choice=='9'){
        //Declare Variables
        float prcTdy, //Price of item today
              prcPrv, //Price of item one year ago
              infRt,  //Inflation Rate
              prc1yr, //Predicted inflated price in one year
              prc2yr; //Predicted inflated price in two years
        char  choice; 

        //Map Inputs to Outputs -> Process
        do {
            cout<<"Enter current price:\n";
            cin>>prcTdy;
            cout<<"Enter year-ago price:\n";
            cin>>prcPrv;

            infRt= (prcTdy - prcPrv)/prcPrv;
            cout<<"Inflation rate: "<<fixed<<setprecision(2)<<infRt*100<<"%\n\n";

            prc1yr = prcTdy + (infRt*prcTdy);
            cout<<"Price in one year: $"<<fixed<<setprecision(2)<<prc1yr<<endl;

            prc2yr = prc1yr + (infRt*prc1yr);
            cout<<"Price in two year: $"<<fixed<<setprecision(2)
                    <<prc2yr<<endl<<endl;

            cout<<"Again:\n";
            cin>>choice;
            if (choice == 'y' || choice == 'Y'){
                cout<<endl;
            }
        }while (choice == 'y' || choice == 'Y');

        //Display Inputs/Outputs

        //Exit the Program - Cleanup
    }else if(choice=='10'){
       //Declare Variables
        float num1,   //First input
              num2,   //Second input
              num3,   //Third input
              maxof2, //Max for 2 Parameters
              maxof3; //Max for 3 Parameters

        //Initialize Variables
        cout<<"Enter first number:\n";
        cin>>num1;
        cout<<endl;

        cout<<"Enter Second number:\n";
        cin>>num2;
        cout<<endl;

        cout<<"Enter third number:\n";
        cin>>num3;
        cout<<endl;

        //Map Inputs to Outputs -> Process
        if (num1>num2){
            cout<<"Largest number from two parameter function:\n";
            cout<<fixed<<setprecision(1)<<num1<<endl<<endl;
        }else if (num2>num1){
            cout<<"Largest number from two parameter function:\n";
            cout<<fixed<<setprecision(1)<<num2<<endl<<endl;
        }

        if (num1>num2 && num1>3){
            cout<<"Largest number from three parameter function:\n";
            cout<<fixed<<setprecision(1)<<num1<<endl;
        }else if (num2>num1 && num2>3){
            cout<<"Largest number from three parameter function:\n";
            cout<<fixed<<setprecision(1)<<num2<<endl;
        }else if (num3>num1 && num3>2){
            cout<<"Largest number from three parameter function:\n";
            cout<<fixed<<setprecision(1)<<num3<<endl;
        }

        //Exit the Program - Cleanup 
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}