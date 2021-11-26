#include<iostream>
#include<conio.h>
using namespace std;


//declaring a function---------


//return-type function-name(parameter1,parameter2......){ function-body }

void addition(int x, int y){


     int sum = x+y;

     cout<<"sum : "<<sum;

}


int main(){


int x,y;

cout<<"enter 1st int number : ";

cin>>x;

cout<<endl;

cout<<"enter 2nd int number : ";

cin>>y;

cout<<endl;



//calling a function---------


//function-name(parameter1 value, parameter2 value..........);

addition(x,y);






getch();


}
