#include <iostream>
#include <iomanip>
using namespace std; 
int main()
{
    int t; 
    cin>>t; 
    while(t--){
       long long a,b,d; 
       cin>>a>>b>>d; 
       double ans=d*d/2.0; 
       cout<<fixed<<setprecision(6)<<ans<<endl; 
    }
    return 0;
}
