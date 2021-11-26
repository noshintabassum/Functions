#include<iostream>
#include<conio.h>
using namespace std;


//if we declare our function after main function we have to use proto-type------------


//declaring proto-type------

//return-type function-name(parameter1-type, parameter2-type..........)

void summation(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);


int main(){



   int x, y;

   cout<<"enter 1st number : ";

   cin>>x;

   cout<<endl;

   cout<<"enter 2nd number : ";

   cin>>y;

   cout<<endl;



   summation(x, y);

   cout<<endl<<endl;

   subtraction(x, y);

   cout<<endl<<endl;

   multiplication(x, y);

   cout<<endl<<endl;

   division(x, y);




getch();


}


//user defined functions---------------


void summation(int x, int y){


    int summation = x+y;

    cout<<"summation : "<<summation;


}



void subtraction(int x, int y){


    int subtraction = x-y;

    cout<<"subtraction : "<<subtraction;


}



void multiplication(int x, int y){


    int multiplication = x*y;

    cout<<"multiplication : "<<multiplication;


}



void division(int x, int y){


     float division = (float)x/y;

     cout<<"division : "<<division;


}




