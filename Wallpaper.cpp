
#include <iostream>
using namespace std; 
int main()
{
int n,k; 
cin>>n>>k; 
long long  arr[n]; 
for(int i=0; i<n; i++)
cin>>arr[i]; 
long long sum=0; 
for(int i=0; i<n; i++)
{
    if(arr[i]%k==0)
    sum+=arr[i]/k; 
    else
    sum+=arr[i]/k+1; 
    
}
cout<<sum<<endl; 
    return 0;
}
