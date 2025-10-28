#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std; 
int main(){
int n; 
cin>>n; 
string s; 
cin>>s; 
int l=0,r=0; 
for(int i=0; i<n; i++){
    if(s[i]=='L')
    l++; 
    else if(s[i]=='R')
    r++;

}
if(l>r)
cout<<"Izquierda\n"; 
else if(l<r)
cout<<"Derecha\n"; 
else
cout<<"Linea Recta\n"; 
    return 0;
}
