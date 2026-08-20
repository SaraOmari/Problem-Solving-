#include <iostream>
#include <map>
#include <iomanip>
#include <algorithm>
using namespace std; 
int main()
{
int t; 
cin>>t; 
while(t--){
    int n; cin>>n; 
   long long  arr[n],arr1[1],arr2[n-1]; 
    for(int i=0; i<n; i++)
    cin>>arr[i];
     sort(arr,arr+n,greater<int>()); 
     arr1[0]=arr[0]; 
     double avg=0; 
     for(int i=1; i<n; i++){
         arr2[i]=arr[i]; 
         avg+=arr2[i]; 
     }
     avg/=n-1; 
     avg+=arr1[0]; 
     cout<<fixed << setprecision(9)<<avg<<endl;
}
    return 0;
}
