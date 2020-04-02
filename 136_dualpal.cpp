/*
ID: rkrish1
TASK: dualpal
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
    freopen("dualpal.out", "w", stdout);
    freopen("dualpal.in", "r", stdin);
//    fstream sf;
//    sf.open("dict.txt", ios::in);
    //srand(time(NULL));
    
    ll n;
       cin>>n;
       ll k=1;
       cin>>k;
       
       vector<ll> v;
       ll p=k+1;
       while(n>0){
           
           vector<string> vs;
           for(ll i=2;i<=10;i++){
               ll op=p;
               string h;
           while(op>0){
               h.push_back(nub(op%i));
               op/=i;
           }
               vs.push_back(h);
           }
           //cout<<p<<endl;
           ll cn=0;
           fori(9){
           ll y=vs[i].size();
           bool yu=true;
           forj(y/2){
               if(vs[i][j]!=vs[i][y-j-1]){yu=false;break;}
           }
               if(yu) cn++;
           }
           if(cn>=2){v.push_back(p);n--;}
           p++;
       }
       
       fori(v.size()){
           cout<<v[i]<<endl;
       }
    
    return 0;
}

