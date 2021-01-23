/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 19, 2021, 1:26 AM
 * Purpose: Menu to be utilized in Homework
 */

//System Level Libraries
#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
using namespace std;  //Libraries compiled under std

//User Level Libraries

//Global Constants - Science/Math Related
//Conversions, Higher Dimensions
const float CNVGRMS=453.592;//Grams/lb
const float PI=4*atan(1);
const float CNVRAD=PI/180;//Conversion to Radians from Degrees

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Variable Declarations
    char choice;

    //Display Menu
    cout<<"Menu for Homework"<<endl;
    cout<<"Type 1 for Gaddis Sorting Names Problem"<<endl;
    cout<<"Type 2 for Gaddis Book Club Points Problem"<<endl;
    cout<<"Type 3 for Gaddis Bank Service Fees Problem"<<endl;
    cout<<"Type 4 for Gaddis Runner's Times Problem"<<endl;
    cout<<"Type 5 for Gaddis Internet Service Bill Problem"<<endl;
    cout<<"Type 6 for Savitch Rock Paper Scissors Problem"<<endl;
    cout<<"Type 7 for Savtich Roman Numeral Conversion Problem"<<endl;
    cout<<"Type 8 for Savitch Compatible Horoscope Signs Problem"<<endl;
    cin>>choice;
    
    if(choice=='1'){
        //Declare Variable Data Types and Constants
            string name1, //First name
                   name2, //Second name
                   name3; //Third name
    
            //Display Inputs/Outputs
            cout<<"Sorting Names\n";
            cout<<"Input 3 names\n";
            cin>>name1;
            cin>>name2;
            cin>>name3;
    
            if (name1>name2 && name2>name3)
                cout<<name3<<endl<<name2<<endl<<name1;
            else if (name1>name3 && name3>name2)
                cout<<name2<<endl<<name3<<endl<<name1;
            else if (name2>name3 && name3>name1)
                cout<<name1<<endl<<name3<<endl<<name2;
            else if (name2>name1 && name1>name3)
                cout<<name3<<endl<<name1<<endl<<name2;
            else if (name3>name1 && name1>name2)
                cout<<name2<<endl<<name1<<endl<<name3;
            else if (name3>name2 && name2>name1)
                cout<<name1<<endl<<name2<<endl<<name3;
            //Exit the Program - Cleanup
    }else if(choice=='2'){
        //Declare Variable Data Types and Constants
            short int book;
    
            //Display Inputs/Outputs
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
    }else if(choice=='3'){
        //Declare Variable Data Types and Constants
            short int check;     //Number of checks
            float     blnc,      //Current bank balance
                      mntFee=10, //Monthly fee
                      lwBlnc,    //Low Balance fee 
                      nwBlnc,    //Final Balance  
                      chkFee;    //Check fee
            
            //Outputs/Inputs
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
            
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Balance     $"<<setw(9)<<blnc<<endl;
            cout<<"Check Fee   $"<<setw(9)<<chkFee<<endl;
            cout<<"Monthly Fee $"<<setw(9)<<mntFee<<endl;
            cout<<"Low Balance $"<<setw(9)<<lwBlnc<<endl;
            cout<<"New Balance $"<<setw(9)<<nwBlnc;

            //Exit the Program - Cleanup
    }else if(choice=='4'){
        //Declare Variable Data Types and Constants
            int  rn1time,//Time of runner 1
                 rn2time,//Time of runner 2
                 rn3time;//Time of runner 3
            string name1,//Name of runner 1
                   name2,//Name of runner 2
                   name3;//Name of runner 3 
    
            //Display Inputs/Outputs
            cout<<"Race Ranking Program\n"
                <<"Input 3 Runners\n"
                <<"Their names, then their times\n";
            cin>>name1;
            cin>>rn1time;
            cin>>name2;
            cin>>rn2time;
            cin>>name3;
            cin>>rn3time;
    
            if (rn1time>0 && rn2time>0 && rn3time>0)
            {
                if (rn1time>rn2time && rn2time>rn3time)
                {
                    cout<<name3<<"\t"<<setw(3)<<rn3time<<endl
                    <<name2<<"\t"<<setw(3)<<rn2time<<endl
                    <<name1<<"\t"<<setw(3)<<rn1time;  
                }
                else if (rn1time>rn3time && rn3time>rn2time){
                    cout<<name2<<"\t"<<setw(3)<<rn2time<<endl
                    <<name3<<"\t"<<setw(3)<<rn3time<<endl
                    <<name1<<"\t"<<setw(3)<<rn1time; 
                }
                else if (rn2time>rn1time && rn1time>rn3time){
                    cout<<name3<<"\t"<<setw(3)<<rn3time<<endl
                    <<name1<<"\t"<<setw(3)<<rn1time<<endl
                    <<name2<<"\t"<<setw(3)<<rn2time; 
                }
                else if (rn2time>rn3time && rn3time>rn1time){
                    cout<<name1<<"\t"<<setw(3)<<rn1time<<endl
                    <<name3<<"\t"<<setw(3)<<rn3time<<endl
                    <<name2<<"\t"<<setw(3)<<rn2time; 
                }
                else if (rn3time>rn2time && rn2time>rn1time){
                    cout<<name1<<"\t"<<setw(3)<<rn1time<<endl
                    <<name2<<"\t"<<setw(3)<<rn2time<<endl
                    <<name3<<"\t"<<setw(3)<<rn3time; 
                }
                else if (rn3time>rn1time && rn1time>rn2time){
                    cout<<name2<<"\t"<<setw(3)<<rn2time<<endl
                    <<name1<<"\t"<<setw(3)<<rn1time<<endl
                    <<name3<<"\t"<<setw(3)<<rn3time;
                }
            }
            else if (rn1time<=0 || rn2time<=0 || rn3time<=0)
            {
                cout<<"ERROR! Time cannot be a negative value.";
            }
            //Exit the Program - Cleanup
    }else if(choice=='5'){
        //Declare Variable Data Types and Constants
            short int  hrs,     //Hours used
                       avlbHrs, //Hours provided for each package
                       addHrs;  //Pay rate for additional hours
            char       pkg;           //Package type
            float      mnthBill, //Monthly Bill
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
    }else if(choice=='6'){
        //Declare Variable Data Types and Constants
            char inp1, //Input of player one
                 inp2; //Input of player two   
            //Initialize Variables

            //Display Inputs/Outputs
            cout<<"Rock Paper Scissors Game\n"
                <<"Input Player 1 and Player 2 Choices\n";
            cin>>inp1>>inp2;

            if (inp1 == 'P' && inp2 == 'S')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'P' && inp2 == 'R')
                cout<<"Paper covers rock.";
            else if (inp1 == 'R' && inp2 == 'P')
                cout<<"Paper covers rock.";
            else if (inp1 == 'S' && inp2 == 'P')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'R' && inp2 == 'S')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 'S' && inp2 == 'R')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 'p' && inp2 == 's')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'p' && inp2 == 'r')
                cout<<"Paper covers rock.";
            else if (inp1 == 'r' && inp2 == 'p')
                cout<<"Paper covers rock.";
            else if (inp1 == 's' && inp2 == 'p')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'r' && inp2 == 's')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 's' && inp2 == 'r')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 'P' && inp2 == 's')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'P' && inp2 == 'r')
                cout<<"Paper covers rock.";
            else if (inp1 == 'R' && inp2 == 'p')
                cout<<"Paper covers rock.";
            else if (inp1 == 'S' && inp2 == 'p')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'R' && inp2 == 's')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 'S' && inp2 == 'r')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 'p' && inp2 == 'S')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'p' && inp2 == 'R')
                cout<<"Paper covers rock.";
            else if (inp1 == 'r' && inp2 == 'P')
                cout<<"Paper covers rock.";
            else if (inp1 == 's' && inp2 == 'P')
                cout<<"Scissors cuts paper.";
            else if (inp1 == 'r' && inp2 == 'S')
                cout<<"Rock breaks scissors.";
            else if (inp1 == 's' && inp2 == 'R')
                cout<<"Rock breaks scissors.";
            else 
                cout<<"Nobody wins.\n";
            //Exit the Program - Cleanup
    }else if(choice=='7'){
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
    }else if(choice=='8'){
        //Declare Variable Data Types and Constants
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
    }else{
        cout<<"Not an Option"<<endl;
    }

    //Clean Up
    
    //Exit stage right!
    return 0;
}
