#include <iostream>
using namespace std; 
int main(){
int t; cin>>t; 
while(t--){
long long a,b; 
cin>>a>>b; 
if(a<=1||b<=1){
cout<<"N\n"; 
continue; }
if(b-a!=2){
    cout<<"N\n"; 
    continue; }
else{
    int flag=0; 
    for(int i=2; i*i<=a; i++){
        if(a%i==0)
        {
            flag=1;
            break; 
        }}
         int flagb=0; 
    for(int i=2; i*i<=b; i++){
        if(b%i==0){
            flagb=1;
            break; 
        }
    }
    
  
    if(flag||flagb)
    cout<<"N\n"; 
    else
     cout<<"Y\n"; 
}

    
}
    return 0;
}
