/* 
 * File:   main.cpp
 * Author: Yesenia Cota
 * Created on January 18, 2021, 1:04 AM
 * Purpose:  Paper-rock-scissors game
 */

//System Libraries
#include <iostream>  //I/O Library
using namespace std;

//User Libraries

//Global Constants
//Math, Science, Universal, Conversions, High Dimensioned Arrays

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the Random Number Seed
    
    //Declare Variables
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
    return 0;
}