#include<iostream>
using namespace std;

int main()
{    
  int x, y,z;
   cout << "x =" ; cin >> x;
   cout << "y =" ; cin >> y;
   cout << "z =" ; cin >> z;
   
   if (x>=y && x>=z && y>=z  ) {
   cout << "the large =" <<x<< endl;       
    cout <<  x<< ">" << y<< ">" << z ;}
        else 
          if (x>y && x>=z && z>=y ){
         cout << "the large =" <<x<< endl;       
         cout <<  x<< ">" << z<< ">" << y ; }
    else
     if (y>=x && y>=z && x>=z) {
          cout << "the large =" <<y<< endl;
           cout << y<< ">" << x<< ">" << z;}
            else 
             if (y>=x && y>=z && z>=x ){
              cout << "the large =" <<y<< endl;       
              cout <<  y<< ">" << z<< ">" << x ;}
      else
      if ( z>=x && z>=y && y>=x) {
     cout << "the large =" << z <<endl;
     cout << z << ">" << y<< ">" << x ; 
     }
   else {
   cout << "the large =" << z <<endl;
    cout << z << ">" << x<< ">" << y  ;} 
     
   
   
    return 0;
}