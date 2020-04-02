/*
ID: rkrish1
TASK: namenum
LANG: C++
*/
#include <bits/stdc++.h>
#include <fstream>

#define ll long long
#define fori(n) for(long long i=0;i<n;i++)
#define forj(n) for(long long j=0;j<n;j++)
#define sp(n) setprecision(n)
#define mkp make_pair
#define mkt make_tuple
#define pi 3.14159265358979323846264
#define d7 1000000007
#define l7 998244353

using namespace std;

ll nub(char c){
    if(c=='A' || c=='B' || c=='C') return 2;
    if(c=='D' || c=='E' || c=='F') return 3;
    if(c=='G' || c=='H' || c=='I') return 4;
    if(c=='J' || c=='K' || c=='L') return 5;
    if(c=='M' || c=='N' || c=='O') return 6;
    if(c=='P' || c=='R' || c=='S') return 7;
    if(c=='T' || c=='U' || c=='V') return 8;
    if(c=='W' || c=='X' || c=='Y') return 9;
    return 0;
}

int main() {
    freopen("namenum.out", "w", stdout);
    freopen("namenum.in", "r", stdin);
    fstream sf;
    sf.open("dict.txt", ios::in);
    //srand(time(NULL));
    
    ll k;
    string s;
    cin>>k;
    ll n=s.size();
    string t;
    map<ll,vector<string>> fg;
    while(getline(sf,s)){
        ll ty=0;
        fori(s.size()){ty=ty*10+nub(s[i]);}
        fg[ty].push_back(s);
        s.clear();
    }
    
    if(fg[k].size()==0){cout<<"NONE\n";}
    else{
        fori(fg[k].size()){
            cout<<fg[k][i]<<endl;
        }
    }
    
    return 0;
}

