#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
int t; 
cin>>t; 
while(t--){
    int a,b,c; 
    cin>>a>>b>>c; 
   if (a==b||a==c||b==c)
   cout<<0<<endl; 
   else
   {
       int arr[3]={a,b,c}; 
       sort(arr,arr+3); 
       cout<<min(arr[2]-arr[1],arr[1]-arr[0])<<endl; 
   }
}
    return 0;
}
