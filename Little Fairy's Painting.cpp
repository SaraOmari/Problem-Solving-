#include <iostream>
#include <set>
using namespace std; 
int main()
{
int t; cin>>t; 
while(t--){
    int n,x; cin>>n;
    set<int>s; 
    for(int i=0; i<n; i++){
        cin>>x; 
        s.insert(x); 
    }
    int k=s.size(); 
    while(!s.count(k))
    k++; 
    cout<<k<<endl; 
}
    return 0;
}
