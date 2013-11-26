/* 
 * File:   main.cpp
 * Author: Jazmine Crane
 * Created on November 25, 2013, 7:07 PM
 * Assignment 6: Arrays
 *   Savitch 8th Ed Chap 7
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void print_19(int []);
void input_19(int []);
bool check_19(int [],int []);

//Main Execution Begins Here
int main(int argc, char** argv) {
int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1:    problem1();break;
        case 2:    problem2();break;
        case 3:    problem3();break;
        case 4:    problem4();break;
        case 5:    problem5();break;
        case 6:    problem6();break;
        case 7:    problem7();break;     
        default:   def(inN);}
    }while(inN>=1&&inN<=7);
    return 0;
}

void Menu(){
    cout<<"Savitch 8th Ed Chapter 7 "<<endl;
    cout<<"        Menu"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 4"<<endl;
    cout<<"Type 4 for problem 5"<<endl;
    cout<<"Type 5 for problem 6"<<endl;
    cout<<"Type 6 for problem 9"<<endl;
    cout<<"Type 7 for problem 19"<<endl;
    cout<<"Type anything else to exit"<<endl;
}
int getN(){
        int inN;
                cin>>inN;
                cout<<endl;
        return inN;
}
void problem1(){
    cout<<"In problem # 1"<<endl;
    cout<<"--------------"<<endl<<endl;

}

void problem2(){
    cout<<"In problem # 2"<<endl;
    cout<<"--------------"<<endl<<endl;
     
}

void problem3(){
    cout<<"In problem # 4"<<endl;
    cout<<"--------------"<<endl<<endl;

}

void problem4(){
        cout<<"In problem # 5"<<endl;
        cout<<"--------------"<<endl<<endl;
        
}

void problem5(){
    cout<<"In problem # 6"<<endl;
    cout<<"--------------"<<endl<<endl;

}

void problem6(){
    cout<<"In problem # 9"<<endl;
    cout<<"--------------"<<endl<<endl;

}

void problem7(){
    cout<<"In problem # 19"<<endl;
    cout<<"--------------"<<endl<<endl;
    
    //Declare Variables
    const int SIZE=10;
    int pin=12345, numGen[SIZE], in[5];
    
    //Seed the random # generator
    srand(time(0));
    //Generate a random array
    for(int i=0;i<10;i++){
        numGen[i]=rand()%3+1;
    }
    
    do{
        //Print legend and random array
        print_19(numGen);
        //Prompt for pin input
        input_19(in);
        //Check if pin is correct
    }while(!check_19(numGen,in));
    
    cout<<"PIN ACCEPTED"<<endl<<endl;

}

void def(int inN){
        cout<<"You typed "<<inN<<" to exit the program"<<endl;
}

//---------------------------------------------------------------------------//
//                         FUNCTIONS FOR PROBLEMS                            //
//---------------------------------------------------------------------------//

// #19
//-----------------------------------------------------------------------------
void print_19(int randNum[]){
    
    cout<<endl<<"PIN:  0 1 2 3 4 5 6 7 8 9"<<endl;
    cout<<"NUM:  ";
    
    for(int i=0;i<10;i++){
        cout<<randNum[i]<<" ";
    }
    cout<<endl<<endl;
}

void input_19(int in[]){
    cout<<"Input # to the corresponding pin (for test purposes the pin is 12345)"<<endl;
    cout<<"Pleas include spaces in between each #: ";
    for(int i=0;i<5;i++){
        cin>>in[i];
    }
    cout<<"You Entered: ";
    for(int i=0;i<5;i++){
        cout<<in[i]<<" ";
    }
    cout<<endl;
}

bool check_19(int randNum[],int in[]){
    
    for(int i=1;i<6;i++){
        if(randNum[i]!=in[i-1]){
            cout<<"! INVALID PIN !"<<endl;
            return false;
        }
    }
    return true;
}