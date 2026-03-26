#include <iostream>
using namespace std; 
int main()
{
int n;
    cin>>n; 
char S[n]; 
int r=0,s=0; 
for(int i=0; i<n; i++)
cin>>S[i]; 
for(int i=0; i<n; i++){
    if(S[i]=='r')
    r++;
    else
    s++;
}
if(r>s)
cout<<"Rawan\n"; 
else if(r<s)
cout<<"Shatha\n"; 
else
cout<<"Draw\n";
    return 0;
}
