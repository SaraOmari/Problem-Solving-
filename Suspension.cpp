#include <iostream>
#include <vector>
using namespace std; 
int main()
{
    int t; cin>>t; 
    while(t--){
        int n,y,r; 
        cin>>n>>y>>r; 
       int sum=(y/2)+r; 
       if(sum<n)
       cout<<sum<<endl; 
       else
       cout<<n<<endl;  
    

    }

    return 0;
}
