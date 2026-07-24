#include <iostream>
using namespace std; 
int main()
{
int t;
    cin>>t; 
while(t--){
    int n; 
    cin>>n; 
     int c=0; 
   for(int i=0; i<=n/4; i++){
       for(int j=0; j<=n/2; j++){
            if (4*i+2*j==n) 
            c++; 
       }
       
   }
    cout<<c<<endl; 
}
    
    return 0;
}
