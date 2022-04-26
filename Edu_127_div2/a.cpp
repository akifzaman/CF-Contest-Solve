#include <bits/stdc++.h>
using namespace std;

#define         nl                  "\n"
#define         mod                 1000000007
#define         sz(c)               (int)c.size()
#define         pb                  push_back
#define         ff                  first
#define         ss                  second
#define         mkp                 make_pair
#define         ll                  long long
#define         pii                 pair<int, int>
#define         pll                 pair<ll, ll>
#define         vll                 vector<ll>
#define         vi                  vector<int>
#define         no                  cout<<"NO\n"
#define         yes                 cout<<"YES\n"
#define         one                 cout<<"1\n"
#define         mone                cout<<"-1\n"
#define         lcm(a, b)           ((a)*((b)/gcd(a,b)))
#define         all(p)              p.begin(),p.end()
#define         mem(ar,val)         memset(ar, val, sizeof(ar))
#define         forn(n)             for(int i=0;i<n;i++)
#define         UNIQUE(a)           sort(all(a)); a.erase(unique(all(a)), a.end())
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
const double pi = acos(-1.0);
const ll INF = 1000000000000000000;
long long M = 1e9+7;
const ll N = 1e6 + 1;

void solve(){
    ll a=0, b=0, sumA=0, sumB=0, prevA=0, prevB=0;
    string s;
    cin>>s;
    if(s.length()<2){
        no;
        return;
    }
    for(ll i=0;i<s.length();i++){
        //cout<<prevA<<" "<<prevB<<endl;
        if(s[i]=='a'){
            prevA++;
            if(prevB==1){
                no;
                return;
            }
            else{
                prevB=0;
            }
        }
        if(s[i]=='b'){
            prevB++;
            if(prevA==1){
                no;
                return;
            }
            else{
                prevA=0;
            }
        }
    }
    if(prevA==1 || prevB==1){
        no;
        return;
    }
    yes;
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    ll test;
    cin>>test;
    while(test--){
        solve();
    }
}