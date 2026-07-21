#include <iostream>
#include <cmath>
using namespace std; 
int main()
{
int t; 
cin>>t; 
while(t--){
    int n; cin>>n; 
   char c[n]; 
   for(int i=0; i<n; i++)
   cin>>c[i]; 
   int count=0; 
   int mx=0;
   for(int i=0; i<n; i++){
       if(c[i]=='#'){
       count++;
      }
       else{
       mx=max(mx,count);
       count=0;}
       
   }
     mx=max(mx,count);
   cout<<(mx+1)/2<<endl;
}
    return 0;
}
