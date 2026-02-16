#include <iostream>
using namespace std; 
int main()
{
int t; cin>>t; 
while(t--){
    int  n; cin>>n; 
    int arr[n]; 
    for(int i=0; i<n; i++)
    cin>>arr[i]; 
    int flag=0; 
    for(int i=0; i<n; i++){
        if(arr[i]==67 ){
            flag=1; 
            break; }
        }
       
    if(flag)
    cout<<"yes\n"; 
    else
        cout<<"no\n"; 
}
    return 0;
}
