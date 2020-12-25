// Write a function called power( ) that takes a double value for n and an int value for p, and returns the result as double value.
// Use a default argument of 2 for p, so that if this argument is omitted, the number will be squared.
// Write a main ( ) function that gets values from the user to test this function.

#include<iostream>
using namespace std;
int power(double n,double p)
{                       
double ans=n;                                                 
int i; 
for(i=1;i<p;i++)
{
    ans*=n;
}
return ans;
}
int main()
{
    double a,b;
cout<<"Enter the number to be squared= ";
cin>>a;
cout<<"Enter the power to be squared= ";
cin>>b;
std:cout<<"The answer is= "<<power(a,b);
return 0; 
}
