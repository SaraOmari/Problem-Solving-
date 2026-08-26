#include <iostream>
#include <algorithm>
using namespace std; 
int main()
{
string s; 
cin>>s; 
int n=0,c=0; 
for(char x:s){
int d=x-'0'; 
n+=d; 
if(d==0)
c=1; }
if (!c||n%3!=0){
    cout<<-1<<endl; 
    return 0; 
}
sort(s.begin(),s.end(),greater<char>()); 
cout<<s<<endl; 
    return 0;


}
