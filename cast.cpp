/*
ID: rkrish1
TASK: palsquare
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

char nub(ll p){
    if(p<10){return p+'0';}
    if(p>=10){return (p-10)+'A';}
    
    return 0;
}

int main() {
    freopen("palsquare.out", "w", stdout);
    freopen("palsquare.in", "r", stdin);
//    fstream sf;
//    sf.open("dict.txt", ios::in);
    //srand(time(NULL));
    
    ll n;
    cin>>n;
    ll k=300;
    vector<pair<string, string>> v;
    for(ll d=1;d<=k;d++){
        ll op=d;
        ll sq=d*d;
        string h1,h2;
        while(op>0){
            h1.push_back(nub(op%n));
            op/=n;
        }
        reverse(h1.begin(), h1.end());
        
        while(sq>0){
            h2.push_back(nub(sq%n));
            sq/=n;
        }
        
        ll y=h2.size();
        bool yu=true;
        fori(y/2){
            if(h2[i]!=h2[y-i-1]){yu=false;break;}
        }
        if(yu){v.push_back(mkp(h1,h2));}
    }
    
    fori(v.size()){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    
    return 0;
}

