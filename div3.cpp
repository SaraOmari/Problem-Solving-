#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
int n;
cin>>n; 
int arr[n]; 
unordered_map<int,int>m;
for(int i=0; i<n; i++){
cin>>arr[i]; 
 m[arr[i]]++;
}
int mx=0;
int ans;

for(auto x:m){
  if(x.second>mx){
      mx=x.second;
  }
}
cout<<mx;
return 0;
}
