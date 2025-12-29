#include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    cin>>s;
    int a=1;
    int b=s-1;
    if (b==0||abs(b)> 999) {
        a=-1;
        b=s+1;
  }
    cout<<a<<" "<<b<< endl;
    return 0;
    
}
