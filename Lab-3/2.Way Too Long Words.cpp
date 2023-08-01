#include<iostream>
using namespace std;
int main()
{
string y;
cin>>y;
if(y.size()<10)
{
cout<<y;
}
else
{
cout<<y[0]<<y.size()-2<<y[y.size()-1];
}
}
