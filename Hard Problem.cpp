#include <iostream>
#include <cmath>
using namespace std; 
int main(){
int t; cin>>t; 
while(t--){
    long long  m,a,b,c; 
    cin>>m>>a>>b>>c; 
    long long mn1=min(m,a),mn2=min(m,b); 
    long long q=m-mn1,w=m-mn2; 
    long long e=q+w; 
    long long r=min(e,c);
    long long ans=mn1+mn2+r; 
    cout<<ans<<endl; 
} return 0;
}
