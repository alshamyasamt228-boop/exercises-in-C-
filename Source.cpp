#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
void main(){
	float a,b,c,x1,x2,delt;
	cout<<"the general rule =ax^2+by+=0"<<endl;
	cout<<"a=";cin>>a;
	cout<<"b=";cin>>b;
	cout<<"c=";cin>>c;
	if(a==0)
	cout<<"no solution";
	else{
		delt=b*b-4*a*c;
		cout<<"delt ="<<delt<<endl;
	if(delt<0)
		cout<<"no solution";
	else{
		x1=(-b+sqrt(delt))/(2*a);
	    x2=(-b-sqrt(delt))/(2*a);
		cout<<"x1 ="<<x1;
		cout<<"\n x2 ="<<x2;} 
	}
	
 getch();
}