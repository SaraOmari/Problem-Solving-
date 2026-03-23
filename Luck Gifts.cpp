#include <iostream>
using namespace std; 
int main()
{
int n; cin>>n;
int c=0; 
for(int i=1; i<=n; i++){
    int x=i,o=0; 
    while(x>0){
        if(x%2==1)
        o++;
        x/=2;
    }
    if(o==2)
    c++;
    
} 
    cout<<c<<endl; 
    return 0;
}
