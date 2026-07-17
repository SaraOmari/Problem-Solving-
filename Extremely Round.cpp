#include <iostream>
#include <set>
using namespace std; 
int main()
{
int t; cin>>t; 

while(t--){
  int n,c=0; cin>>n; 
  for(int i=1; i<=n; i*=10){
      for(int j=1; j<=9; j++){
          if(i*j<=n)
          c++;
      }  
  }
  cout<<c<<endl; 
}
    return 0;
}
