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

vector <ll> v;
ll n,k;
void solve(){
    cin>>n>>k;
    if(n==1 && k==1){
        cout<<"YES"<<endl;
        cout<<"1"<<endl;
    }
    else if(n>=1 && k==1){
        cout<<"YES"<<endl;
        for(ll i=1;i<=n;i++){
            cout<<i<<endl;
        }
    }
    else if((n*k)%2==0){
        ll p=1, q=2;
        ll temp=n;
        while(temp>0){
            for(ll i=0;i<k;i++){
                if(p>(n*k)){
                    cout<<"NO"<<endl;
                    return;
                }
                p+=2;
            }
            for(ll i=0;i<k;i++){
                if(q>(n*k)){
                    cout<<"NO"<<endl;
                    return;
                }
                q+=2;
            }
            temp-=2;
        }
        cout<<"YES"<<endl;
        p=1, q=2;
        while(n>0){
            for(ll i=0;i<k;i++){
                cout<<p<<" ";
                p+=2;
            }
            cout<<endl;
            for(ll i=0;i<k;i++){
                cout<<q<<" ";
                q+=2;
            }
            cout<<endl;
            n-=2;
        }
    }
    else cout<<"NO"<<endl;
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
