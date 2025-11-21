#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
int n; 
cin>>n; 
long long arr[n]; 
for(int i=0;i<n; i++)
cin>>arr[i]; 
int a=1,res=1; 
for(int i=1;i<n; i++)
{
 if(arr[i]>arr[i-1])
 a++; 
 else
 a=1;
res=max(res,a); 
}
cout<<res<<endl; 
    return 0;
}
