#include <iostream>
using namespace std;
int main()
{
int x;
cout<<"Enter first number\n";
cin>>x; // user will give 'x' a value.
int y;
cout<<"Enter second number\n";
cin>>y; // user will give 'y' a value.
cout<<(x!=y)<<" "<<(x>=y);
}

//the logic of the output is that if x is not equal to y then it will print 1 and if x is greater than or equal to y then it will print 1
//if x is equal to y then it will print 0 and if x is less than y then it will print 0