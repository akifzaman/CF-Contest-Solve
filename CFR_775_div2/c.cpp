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

struct node{
    ll r, c;
};
vector <pair<ll,ll>> G[100000];
void solve(){
    ll m,n,sum=0;
    cin>>m>>n;
    ll arr[m+1][n+1]={0};
    set<ll> s;
    for(ll i=1;i<=m;i++){
        for(ll j=1;j<=n;j++){
            cin>>arr[i][j];
            s.insert(arr[i][j]);
        }
    }
    queue <ll> q;
    for(auto it: s){
        q.push(it);
    }
    while(!q.empty()){
        ll u=q.front();
        q.pop();
        for(ll i=1;i<=m;i++){
            for(ll j=1;j<=n;j++){
                if(arr[i][j]==u){
                    G[u].push_back(make_pair(i,j));
                }
            }
        }
    }
    for(auto it: s){
        for(ll i=0;i<G[it].size();i++){
            for(ll j=i+1;j<G[it].size();j++){
                sum+= (abs(G[it][i].first - G[it][j].first) + abs(G[it][i].second - G[it][j].second));
            }
        }
    }
    cout<<sum<<endl;
    return;
}
int main()
{
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    solve();
}
