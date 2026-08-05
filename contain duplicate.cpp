#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <stack>
#include <list>
#include <algorithm>
using namespace std; 
int main()

{  
    string s;
    cin>>s; 
    unordered_map<char,int>mp;
    for(char c:s)
    mp[c]++;
   int flag=0;
    for(int i=0; i<s.size(); i++)
    {
        if(mp[s[i]]>1){
            flag=1; 
            break;
        }
     
    
    }
    if(flag)
    cout<<"true"<<endl; 
    else
    cout<<"false\n"; 
    
    return 0;}
