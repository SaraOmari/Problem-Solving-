
#include <iostream>
using namespace std; 
int main()
{
long long a,b,c; 
cin>>a>>b>>c; 
if(a==-1)
cout<<c-b<<endl; 
else if(b==-1)
cout<<c-a<<endl; 
else
cout<<a+b<<endl; 
    return 0;
}