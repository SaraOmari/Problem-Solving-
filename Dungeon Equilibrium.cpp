#include <iostream>
#include <map>
using namespace std; 
int main()
{
int t; 
cin>>t; 
while(t--){
    int n; cin>>n; 
    int arr[n]; 
    map<int,int> freq;
    for(int i=0; i<n; i++){
    cin>>arr[i];
    freq[arr[i]]++;}
    int c=0; 
     for(auto &[x,y]:freq){
         if(x==0||x>y)
         c+=y; 
         else if(x<y)
         c+=y-x; 
     }
cout<<c<<endl; 
}
    
    return 0;
}
