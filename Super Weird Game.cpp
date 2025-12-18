#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;
    cin>>n>>k;
    vector<int>m(n),b(n);
    for (int i=0;i<n;i++)
        cin>>m[i];
    for (int i=0;i<n;i++)
        cin>>b[i];

    unordered_map<int,long long> freqm,freqb;
    for (int x:m)
        freqm[x]++;
    for (int x:b)
        freqb[x]++;
    long long M=0,B=0;
    for (auto &a : freqm) {
        int x=a.first;
        int y=k-x;
        if(freqm.find(y)==freqm.end())
            continue;
        if (x < y) {
           M+= freqm[x]*freqm[y];
        } 
        else if (x==y) {
            M+=freqm[x]*(freqm[x]-1)/2;
        }
    }
    for (auto &a:freqb) {
        int x= a.first;
        int y= k-x;
        if (freqb.find(y)==freqb.end())
            continue;
        if (x < y) {
            B+= freqb[x]*freqb[y];
        } 
        else if (x==y) {
            B+=freqb[x]*(freqb[x]-1)/2;
        }
    }

    if (M>B)
        cout<<"MAHMOUD\n";
    else if (B>M)
        cout<<"BASHAR\n";
    else
        cout<<"DRAW\n";

    return 0;
}
