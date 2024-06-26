#include <iostream>
using namespace std;
int main() 
{ 
  int a,b,c,avg;
  
 cout<<"Enter first number";
 cin >> a;
 
 cout<<"Enter second number";
 cin>>b;
 			//As int has 32 bits
 c=a&b;
 a=a^b;
 b=c<<1;		//<< means left shift
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 
 c=a&b;
 a=a^b;
 b=c<<1;
 			//>> means right shift 
 avg=a>>1;
 
 cout<<"Average of the two numbers is :"<<avg<<endl;
 
 }

