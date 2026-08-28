#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std; 
int main()
{
int t; 
cin>>t; 
while(t--){
    int n; 
    cin>>n; 
  vector<int>v(n); 
  for(auto &x:v)
  cin>>x; 
  sort(v.rbegin(),v.rend()); 
  cout<<v[0]<<endl; 
    
}

    
return 0;
}
