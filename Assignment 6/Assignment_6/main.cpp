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
#include <iomanip>
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
void addHex_2(char []);
void dltRpt_3(char [],int &);
void sort_6(int [],int);
void prntBrd_10(char []);
void play_10();
bool isWon_10(char []);
void prin_11(char []);
void input_11(int &,char &);
void set_11(char [],int,char);
bool isfull_11(char []);
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
    cout<<"Type 1 for problem 2"<<endl;
    cout<<"Type 2 for problem 3"<<endl;
    cout<<"Type 3 for problem -"<<endl;
    cout<<"Type 4 for problem 6"<<endl;
    cout<<"Type 5 for problem 10"<<endl;
    cout<<"Type 6 for problem 11"<<endl;
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
    cout<<"In problem # 2"<<endl;
    cout<<"--------------"<<endl<<endl;
    
    //Declare Variables
    const int SIZE=22;
    char hex[SIZE]={};
    
    cout<<"Adding Two Hexadecimal Numerals Together"<<endl;
    cout<<" Enter 2 numbers in base 16 to add them."<<endl;
    cout<<" You can enter up to 10 digits for each number, follow this chart:"<<endl;
    cout<<" 1-9, a=10, b=11, c=12, d=13, e=14, f=15"<<endl;
    cout<<" !When you are finished entering add a 0!"<<endl;
    cout<<" Example entry 1d+a+0 would equal 39. "<<endl;
    
    for(int i=0;i<SIZE;i++){
     cin>>hex[i];
     if(hex[i]=='0')break;
    }
    //convert char to int and add
    addHex_2(hex);
    cout<<endl<<endl;
}

void problem2(){
    cout<<"In problem # 3"<<endl;
    cout<<"--------------"<<endl<<endl;
     
	//Declare Variables
    char a[20]={'a','b','a','c','b','d','p'};//partially filled array
    int size=7;
    cout<<"This programs 'deletes' repeats in an array."<<endl<<endl;
    //output array
    cout<<"Before: size = "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";   
    }
    cout<<endl;
    //delete the repeats
    dltRpt_3(a,size);
    //output updated array
    cout<<"After: size = "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
}

void problem3(){
    cout<<"In problem # -"<<endl;
    cout<<"--------------"<<endl<<endl;
	//Problem 5 Here
}

void problem4(){
        cout<<"In problem # -"<<endl;
        cout<<"--------------"<<endl<<endl;
		
    //Declare Variables
    const int SIZE=10;
    int sorted[SIZE],notSort[SIZE]={8,6,10,2,16,4,18,14,12,10};
    int cnt=0;
    
    cout<<"Sorting An Array"<<endl;
    for(int i=0;i<SIZE;i++){ //Copy original array to a new one
        sorted[i]=notSort[i];
        cnt++; //Keeps track of size of new array
        for(int n=0;n<cnt;n++){
            sort_6(sorted,cnt); //Sort the new array using size(cnt) of new array 
        }     
    }  
    //Output results
    cout<<" Before   After"<<endl;
    for(int i=0;i<SIZE;i++){
        cout<<setw(5)<<notSort[i];
        cout<<setw(8)<<sorted[i]<<endl;
    }
    cout<<endl;
}

void problem5(){
    cout<<"In problem # 10"<<endl;
    cout<<"--------------"<<endl<<endl;

    //Instructions
    cout<<"This is a tic-tac-toe game for 2 players."<<endl;
    cout<<"Player 1 is X and player 2 is O."<<endl;
    cout<<"Enter the # of space to place your symbol when it is your turn."<<endl<<endl;
    //Begin game
    play_10();
}

void problem6(){
    cout<<"In problem # 11"<<endl;
    cout<<"--------------"<<endl<<endl;
    
    //Declare Variables
    const int SIZE=28;
    int a;
    char b;
    char seat[SIZE]={'-','B','-','D',   //Initialize seat assignment
                     'A','-','C','-',
                     'A','-','C','D',
                     'A','B','C','D',
                     '-','B','-','-',
                     'A','B','-','-',
                     '-','-','C','D'};
    //Output instructions
    cout<<"         Welcome to C++ Airlines!"<<endl;
    cout<<"Please select a seat for your flight."<<endl;
    cout<<"Seats marked with an - have already been taken."<<endl;
    cout<<"->If at any time you wish to exit enter 0."<<endl;
    cout<<"Enter the row number and seat letter of your choice:"<<endl;
    //Output seating arrangement
    prin_11(seat);
    do{
        input_11(a,b); //prompt for input
        if(a==0)break; //exit if 0 is entered
        cout<<endl<<"You picked seat: "<<a<<b<<endl;
        set_11(seat,a,b); //mark seat as taken
        prin_11(seat); //output seating arrangement
    }while(!isfull_11(seat)); //check if all seats are taken
    cout<<endl;
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

// #2
//-----------------------------------------------------------------------------
void addHex_2(char hex[]){
    //Declare Variables
    int temp [22]={},sum=0;
    
    for(int i=0;i<22;i++){
        if(hex[i]>47&&hex[i]<58){   //using ascii code to convert char to int
            temp[i]=(hex[i]-48)*16; //+16 to convert to base 10; copy to new array
        }
        else if(hex[i]>96&&hex[i]<103){
            temp[i]=(hex[i]-97)+10; //+10 to convert to base 10; copy to new array
        }
    }
    //sum all the items in the new array
    for(int i=0;i<22;i++){
        sum+=temp[i];
    }
    //output the sum
    if(sum<1000000000){
        cout<<"sum =  ";
        cout<<sum;
     }
    else cout<<"Addition Overflow"<<endl;
}

// #3
//-----------------------------------------------------------------------------
void dltRpt_3(char a[],int& size){
   //Declare Variables
    int size2=0;
    bool found;
    
    for(int i=0;i<size;i++){    //Target a number
        found=false;
        for(int n=0;n<size2;n++){ //restrict search area for target number
            if(a[n]==a[i]){       //check if target already exists
                found=true;
            }
        }
        if(!found){        //if no duplicates of target is found then replace  
            a[size2]=a[i]; //last element in the restricted size of the array  
            size2++;       //with the target number
        }
    }
    size=size2;   //copy the new array size to the old
}

// #6
//-----------------------------------------------------------------------------
void sort_6(int a[],int size){
    //Declare Variables
    int temp;
    //sort the array smallest to largest by swapping elements
    for(int i=1;i<size;i++){
        if(a[i]<a[i-1]){
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;  
        }
    }
}

// #10
//-----------------------------------------------------------------------------
void prntBrd_10(char board[]){
    int count=0;
    //Output array 
    for(int i=0;i<9;i++){
        count++;
        cout<<board[i]<<" ";
        if(count==3){
            cout<<endl;
            count=0;
        }
    }
    cout<<endl;
}

void play_10(){
    //Declare Variables
    const int SIZE=9;
    char board[SIZE]={'1','2','3','4','5','6','7','8','9'};
    char p1,p2;
    //Output the board
    prntBrd_10(board);
    do{
        //prompt Player 1 move
        cout<<"P -1- move: ";
        cin>>p1;
        cout<<endl;
        //copy player 1 move onto the board
        for(int i=0;i<9;i++){
            if(p1==board[i]) board[i]='X';
        }
        //Output the board
        prntBrd_10(board);
        //Check to see if the board is full
        if(isWon_10(board))break;
        //prompt Player 2 move
        cout<<"P -2- move: ";
        cin>>p2;
        cout<<endl;
        //copy player 2 move onto the board
        for(int i=0;i<9;i++){
            if(p2==board[i]) board[i]='O';
        }
        //Output the board
        prntBrd_10(board);
    //Check to see if the board is full
    }while(!isWon_10(board));
}

bool isWon_10(char board[]){
    //Check if all player moves occupy the whole board
    for(int i=0;i<9;i++){
        if(board[i]!='X'&&board[i]!='O')return false;
    } 
    return true;
}

// #11
//-----------------------------------------------------------------------------
void input_11(int &a,char &b){
    do{
    cout<<"Enter a seat: ";
    cin>>a;
    if(a==0)break;
    cin>>b;
    }while((a<1||a>7) || (b!='a'&&b!='A'&&b!='b'&&b!='B'&&b!='c'&&b!='C'&&b!='d'&&b!='D'));
}

void prin_11(char a[]){
    //Declare Variables
    int cnt=0,row=0;
    for(int i=0;i<28;i++){
        cnt++;
        if(cnt==1){
            row++;
            cout<<row<<"| ";
        }
        cout<<a[i]<<" ";
        if(cnt==4){
            cout<<endl;
            cnt=0;    
        }
    }
}

void set_11(char seats[],int a,char b){
    int temp;
    if(b=='a'||b=='A') temp=4;
    if(b=='b'||b=='B') temp=3;
    if(b=='c'||b=='C') temp=2;
    if(b=='d'||b=='D') temp=1;
    if(seats[a*4-temp]=='-')
        cout<<"!!Seat taken!! Please choose another!"<<endl;
    else seats[a*4-temp]='-'; 
}

bool isfull_11(char a[]){
    for(int i=0;i<28;i++){
        if(a[i]!='-')return false;
    }
    cout<<"!!Flight is full!!"<<endl<<endl;
    return true;
}


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