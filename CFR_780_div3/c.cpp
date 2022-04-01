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
/*
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
ahsjhwdvhiwbvkwbvjwivuwuvbwovbwourvbowunvlkw vwuvbowv
*/
string s;
void solve(){
    cin>>s;
    map<char, ll> m;
        bool flag=false;
        ll l;
        ll res=0;
        for(int i=0; i<s.length(); i++){
            if(flag){
                 if(m[s[i]]){
                     ll a=(m[s[i]]-l+(i- m[s[i]])-1);
                     res+=a;
                     for(ll j=l;j<=i;j++){
                         m[s[j]]=0;
                     }
                     flag=false;
                 }
                 else{
                     m[s[i]]=(i+1);
                 }
            }
            else if(i==s.length()-1){
                res++;
                break;
            }
            else if(s[i]==s[i+1]){
                i++;
            }
            else if(s[i]!=s[i+1]){
                if(i==s.length()-1){
                    res++;
                    break;
                }
                if(!flag) l=i;
                flag=true;
                m[s[i]]=(i+1);
            }

        }
        for(auto it=m.begin();it!=m.end(); it++){
            if((*it).second) res++;
        }
        cout<<res<<endl;
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
