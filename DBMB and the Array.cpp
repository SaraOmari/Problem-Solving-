#include <iostream>
using namespace std; 
int main()
{
    int t; 
    cin>>t; 
    while(t--){
        int n,s,x; 
        cin>>n>>s>>x; 
        int arr[n]; 
        int sum=0; 
        for(int i=0; i<n; i++)
        {
            cin>>arr[i]; 
            sum+=arr[i]; 

        }
        if(sum<=s&&(s-sum)%x==0)
        cout<<"yes\n"; 
        else
        cout<<"no\n"; 
    }

    return 0;
}
