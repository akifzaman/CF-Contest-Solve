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

void solve()
{
    ll n, m, i, j, x, weight;
    cin>>n>>m;
    unordered_map<ll, ll> mp;
    vector<pair<ll, ll>> arr, required;
    for(i=0;i<m;i++)
    {
        cin>>x>>weight;
        mp[x] = i+1;
        arr.pb({weight, x});
    }
    sort(all(arr));
    ll sum = 0;
    for(i=0;i<2*n;i++)
    {
        required.pb({arr[i].ss, arr[i].ff});
        sum+=arr[i].ff;
    }
    sort(all(required));
    cout<<sum<<endl;
    for(i=0,j=2*n-1;i<n;i++,j--)
    {
        cout<<mp[required[i].ff]<<" "<<mp[required[j].ff]<<endl;
    }
    cout<<endl;
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
