#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std; 
int main()
{
int t; cin>>t; 
while(t--){
    int n; cin>>n; 
   int aa[3]; 
   for(int i=0; i<3; i++)
    cin>>aa[i]; 
    sort(aa,aa+3);
    cout<<n-aa[0]<<endl;
}
    return 0;
}
