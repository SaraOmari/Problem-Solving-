
#include <iostream>
using namespace std; 
int main()
{
    int t; cin>>t; 
    while(t--){
        long long n ,ans=0; 
        cin>>n; 
        while(n>2){
            ans+=n/3; 
            n=(n%3)+(n/3); 
        }
        cout<<ans<<endl;
    }
    return 0;
}
