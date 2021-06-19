// tree house solution-May long chalange-2021

#include <bits/stdc++.h>
using namespace std;

#define nl "\n"
#define sz(x) x.size()
#define pb push_back
#define ll long long
#define sortall(x) sort(all(x))
#define rsort(x) sort(rall(x))
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fr(i, x, y) for (int i = (int)x; i < (int)y; ++i)
#define frr(i, x, y) for (int i = (int)x; i >= (int)y; --i)

typedef vector<int> vi;
typedef vector<ll> vl;

const int N = 1e6;
const int MOD = 1e9 + 7;

ll mul(ll x, ll y) { x %= MOD, y %= MOD; return (x * 1ll * y) % MOD; }


//=========================CODE IS HERE======================//
vi g[N];
ll dfs(int s=1, int e=0){
    vl cnt;
    for(int v:g[s]) if(v!=e){
        ll x = dfs(v, s);
        cnt.pb(x);
    }
    ll sm=0;
    rsort(cnt);
    fr(i, 0, sz(cnt)){
        sm+=(i+1)*cnt[i];
    }
    return sm+1;
}
void solveTestCase(){
    ll n, x;
    cin >> n >> x;
    fr(i, 0, n+1) g[i].clear();
    int u, v;
    fr(i, 1, n){
        cin >> u >> v;
        g[u].pb(v);
        g[v].pb(u);
    }
    ll tot = dfs();
    ll ans = mul(tot, x);
    cout << ans << nl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
        solveTestCase();
    return 0;
}