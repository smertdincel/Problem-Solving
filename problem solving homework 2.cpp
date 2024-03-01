//***********************************************************************************************************************************************************************
//****************************************                        STUDENT NAME=SADIK MERT DÝNCEL                          ***********************************************
//****************************************                        STUDENT NUMBER=B*********                               ***********************************************
//****************************************                        HONOR CODE= I  DID  MYSELF HOMEWORK                     ***********************************************
//****************************************            ASSIGNMENT=PROBLEM SOLVING IN SOFTWARE ENGINEERING SECOND HOMEWORK  ***********************************************
//***********************************************************************************************************************************************************************

#include<iostream>                      //define library
#include<cmath>                         // define library
using namespace std;                    
int a,b,n;                              //define integer
double h,epsilon,integral=0;            //define number
void input();                           //void means no data type specified
void source();

int main()
{
	source();                            // call by value
	
		return 0;
}
void input()                             
{
	cout<<"a:";                           //print a 
	cin>>a;                               //will be entered from the keyboard
	cout<<"b:";                           // print b
	cin>>b;	                              //will be entered from the keyboard
 	cout<<"n:";                           // print n
	cin>>n;                               //will be entered from the keyboard
	h=double(b-a)/n;                      //calculate h
	cout<<"h="<<h<<endl;                  //print h
}
void source()
{
	input();
	for(int a=0;a<n;a++)                    // must be loop for,because the range value should increase one by one until the last n number entered and a field should be formed.
	{
		cout<<"---------------------\n";                             //a dashed line
		cout<<"x"<<a<<   ":"<<a*h<<endl;                             //print xo or x1 .....
		epsilon=(2*a*h+h)/2;                                         //calculate epsilon
		cout<<"epsilon  :"<<epsilon;                                 // print epsilon
		cout<<"\ninterval value :"<<pow(epsilon,2)*h<<endl;          //the integral value is found by squaring epsilon and multiplying it by h
		integral+=(pow(epsilon,2))*h;                                //the found value is summed with the previous found integral and a new integral value is created
	}
	cout<<"\n--------------\n";                                      //a dashed line
	cout<<"\nINTEGRAL:"<<integral<<"\n";                             //print integral value
}

