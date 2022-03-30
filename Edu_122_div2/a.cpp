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
    ll n;
    cin>>n;
    vector <ll> v;
    for(ll i=1;i<=999;i++){
        if(i%7==0){
            v.pb(i);
        }
    }
    sort(all(v));
    //for(ll i=0;i<v.size();i++) cout<<v[i]<<" ";
    if(n%7==0){
        cout<<n<<endl;
    }
    else{
        ll val=n-7;
        string s1=to_string(*lower_bound(v.begin(),v.end(),val));
        string s2=to_string(*upper_bound(v.begin(),v.end(),n));
        string s3=to_string(n);
        ll val1=0, val2=0;
        for(ll i=0;i<max(s1.length(), s3.length());i++){
            if(s1[i]!=s3[i]){
                val1++;
            }
        }
        for(ll i=0;i<max(s2.length(), s3.length());i++){
            if(s2[i]!=s3[i]){
                val2++;
            }
        }
        if(val1>val2){
            cout<<s2<<endl;
            return;
        }
        else{
            cout<<s1<<endl;
            return;
        }
    }
    return;
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
