/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 26, 2021, 3:57 PM
 * Purpose: Waiting time 12 hour notation
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes
char notatn(char); //Function to output AM or PM
int hrntn(int);    //Function to output in 12-Hour notation
int mntn(int);
int wtg(int, int, int);
int wtghr(int&, int&, int&, int&, int&);
char wtngNot(char ,int& ,int&);

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
    int  hr,     //Hours
         min,    //Minutes
         wtngTm, //Waiting Time
         wtngHr,
         wtngMn;
    char ampm,   //Time in AM/PM
         choice; //Choice to repeat
    
    //Initialize Variables
    do{
    cout<<"Enter hour:\n\n";
    cin>>hr;
    cout<<"Enter minutes:\n\n";
    cin>>min;
    cout<<"Enter A for AM, P for PM:\n\n";
    cin>>ampm;
    cout<<"Enter waiting time:\n\n";
    cin>>wtngTm;
    
    wtngHr = 0;
    //Map Inputs to Outputs -> Process
    cout<<"Current time = "<<hrntn(hr)<<":"<<mntn(min)<<notatn(ampm)<<endl;
    
    cout<<"Time after waiting period = "
            <<wtghr(hr, min, wtngTm, wtngMn, wtngHr)<<":"
            <<wtg(min, wtngTm, wtngMn)<<" "
            <<wtngNot(ampm, wtngHr, hr)<<endl;
    //Display Inputs/Outputs
    cout<<"Again:\n";
    cin>>choice;
    if (choice == 'y'||choice == 'Y')
        cout<<endl;
    }while (choice == 'y'||choice == 'Y');
    //Exit the Program - Cleanup
    return 0;
}

char notatn(char ampm){
    if (ampm == 'A'){
        cout << "AM";
    }else if (ampm == 'P'){
        cout << "PM";
    }
    return 0;
}

int hrntn(int hr){
    if (hr > 0 && hr <= 9){
        cout<<"0";
    }else if (hr >= 10 && hr <=12){
    }else if (hr >= 13 && hr <=23){
        hr = hr - 12;
    }
    return hr;
}

int mntn(int min){
    if (min > 0 && min <=9){
        cout<<"0";
    }else if (min < 9 && min >=59){
    }
    return min;
}

int wtg(int min, int wtngTm, int wtngMn){
    wtngMn = min + wtngTm;
    if (wtngMn >= 60 && wtngMn < 120){
        wtngMn = wtngMn - 60;
    }else if (wtngMn >= 120 && wtngMn < 180){
        wtngMn = wtngMn - 120;
    }else if (wtngMn >= 180 && wtngMn < 240){
        wtngMn = wtngMn - 180;
    }else if (wtngMn >= 240 && wtngMn < 300){
        wtngMn = wtngMn - 240;
    }else if (wtngMn >= 300){
        wtngMn = wtngMn - 300;
    }
    if (wtngMn > 0 && wtngMn <= 9){
        cout<<"0";
    }
    return wtngMn;
}
int wtghr(int& hr, int& min, int& wtngTm, int& wtngMn, int& wtngHr){
    wtngMn = min + wtngTm;
    wtngHr = wtngHr + hr;
    if (wtngMn >=60 && wtngMn < 120){
        wtngHr = hr + 1;
        if (wtngHr > 0 && wtngHr <= 9){
        cout<<"0";
        }else if (wtngHr >= 10 && wtngHr <=12){
        }else if (wtngHr >= 13 && wtngHr <=23){
            wtngHr = wtngHr - 12;
    }
    }else if (wtngMn >= 120 && wtngMn < 180){
        wtngHr = hr + 2;
        if (wtngHr > 0 && wtngHr <= 9){
        cout<<"0";
        }else if (wtngHr >= 10 && wtngHr <=12){
        }else if (wtngHr >= 13 && wtngHr <=23){
            wtngHr = wtngHr - 12;
    }
    }else if (wtngMn >= 180 && wtngMn < 240){
        wtngHr = hr + 3;
        if (wtngHr > 0 && wtngHr <= 9){
        cout<<"0";
        }else if (wtngHr >= 10 && wtngHr <=12){
        }else if (wtngHr >= 13 && wtngHr <=23){
            wtngHr = wtngHr - 12;
    }
    }else if (wtngMn >= 240 && wtngMn < 300){
        wtngHr = hr + 4;
        if (wtngHr > 0 && wtngHr <= 9){
        cout<<"0";
        }else if (wtngHr >= 10 && wtngHr <=12){
        }else if (wtngHr >= 13 && wtngHr <=23){
            wtngHr = wtngHr - 12;
    }
    }else if (wtngMn >= 300){
        wtngHr = hr + 5;
        if (wtngHr > 0 && wtngHr <= 9){
        cout<<"0";
        }else if (wtngHr >= 10 && wtngHr <=12){
        }else if (wtngHr >= 13 && wtngHr <=23){
            wtngHr = wtngHr - 12;
    }
    }
    if (wtngHr > 0 && wtngHr <= 9){
        cout<<"0";
    }else if (wtngHr >= 10 && wtngHr <=12){
    }else if (wtngHr >= 13 && wtngHr <=23){
        wtngHr = wtngHr - 12;
    }
    return wtngHr;
}
char wtngNot(char ampm,int& wtngHr,int& hr){
    wtngHr = wtngHr + hr;
    if (wtngHr > 12 && ampm == 'A'){
        cout <<"PM";
    }else if (wtngHr > 12 && ampm == 'P'){
        cout <<"AM";
    }else if (wtngHr < 12 && ampm == 'A'){
        cout <<"AM";
    }else if (wtngHr < 12 && ampm == 'P'){
        cout<<"PM";
    }
    return 0;
}