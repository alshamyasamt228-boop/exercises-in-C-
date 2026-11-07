#include <iostream>
using namespace std;

int main() {
  int x, avg,chem,bio,physic,engl,arbi,math,avg_s;
  cout << "for Medical college enter 1\n" ;
  cout << "for Engineering college enter 2\n" ;
  cout << "for management college enter 3\n" ;
    cin >> x;
    switch(x) {
    case 1: cout << "enter your average =" ;
              cin >> avg;
               if(avg>=90) {
                 cout << "the English =" ;cin >> engl;
                  cout << "the Biology =" ;cin >> bio;
                  cout << "the chemistry =" ;cin >> chem;
                  avg_s=(engl+bio+chem)/3;
             
                   if (chem==100 &&avg_s>=90 )
                        cout << "congratulations accepted  doctor" << endl;
                          else 
                          cout << "didn't accepted " << endl;}
              else            
               if (avg>= 85 &&avg_s>=90) {
                cout << "congratulations dentist " << endl; }
              else{
                cout << " didnt accepted " << endl; }
    break; 
    case 2: cout << "enter your average =" ; cin >> avg; 
                 cout << "the math =" ;cin >> math;
                  cout << "the english =" ;cin >>engl ;
                  cout << "the physical =" ;cin >> physic;
                  avg_s=(math+engl+physic)/3; 
             if (avg>=80&&avg_s>=90) 
             cout << "congratulations accepted engineering " << endl;  
             else
             cout << "didn't accepted engineering " << endl;   
    break;
    case 3:  cout << "enter your average =" ; cin >> avg;
             cout << "the math =" ;cin >> math;
                  cout << "the english =" ;cin >>engl ;
                  cout << "the arabic =" ;cin >> arbi;
                  avg_s=(math+engl+arbi)/3;   
             if (avg>=70&&avg_s>=90) 
             cout << "congratulations accepted accounting " << endl; 
              else 
               if (avg>=60&&avg_s>=90) 
               cout << "congratulations accepted business " << endl;  
            else
             cout << "didn't accepted  " << endl;  
    break;     
    
 default : cout << "i don't know " << endl;
    break;
    
    }
    return 0;
}