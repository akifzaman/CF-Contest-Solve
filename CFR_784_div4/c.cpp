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
    ll n, odd1=0, even1=0, odd2=0, even2=0, allEven=0, allOdd=0;
    cin>>n;
    ll arr[n]={0};
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    for(ll i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]%2==0){
                even1++;
            }
        }
        else if(i%2==1){
            if(arr[i]%2==1){
                odd1++;
            }
        }
    }
    for(ll i=0;i<n;i++){
        if(i%2==0){
            if(arr[i]%2!=0){
                odd2++;
            }
        }
        else if(i%2==1){
            if(arr[i]%2==0){
                even2++;
            }
        }
    }
    for(ll i=0;i<n;i++){
        if(arr[i]%2==0){
            allEven++;
        }
    }
    for(ll i=0;i<n;i++){
        if(arr[i]%2!=0){
            allOdd++;
        }
    }
    if(allEven==n || allOdd==n || (odd1+even1)==n || (odd2+even2)==n){
       yes;
    }
    else no;
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
