#include <iostream>
#include <algorithm>
using namespace std; 
int main() {

int g,c,l; 
cin>>g>>c>>l; 
int arr[3]; 
arr[0]=g; 
arr[1]=c; 
arr[2]=l; 
sort (arr,arr+3); 
if(arr[2]-arr[0]>=10)
cout<<"check again\n"; 
else
cout<<"final "<<arr[1]<<endl; 
    return 0;
}
