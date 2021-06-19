/*

An interesting sequence -solution
May long challange -2021
*/


#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#else
// #include "myheader.h"
#endif
#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O1")
#pragma GCC optimize("O2")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
void input() {return;}
template<typename T1, typename... T2>
    void input(T1 & x, T2&... args){((cin >> x), input(args...));}
void wrt() { cout << "\n"; return;}
template<typename T1, typename... T2>
    void wrt(T1 x, T2... args){((cout << x << ' '), wrt(args...));}
template<typename T> void inputlst(T & lst, int x, int y)
    { for(int i = x ; i < y; i++ ) cin >> lst[i]; }
template<typename T> void printlst(T & lst, int x, int y)
    { for(int i = x ; i < y; i++ ) cout << lst[i] << ' '; wrt(); }
#define boost ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
#define pb push_back
#define tests int test; cin >> test; while(test--)
#define fora(i, x, y) for (ll i = x; i < y; ++i)
#define ford(i, x, y) for (ll i = x; i >= y; --i)
#define all(lst) lst.begin(), lst.end()
#define rall(lst) lst.rbegin(), lst.rend()
#define ceil(a, b) ((a + b - 1) / (b))
#define sum(lst) accumulate(all(lst), 0ll)
#define CountVal(lst, val) count(all(lst), val)
#define sortlst(lst) sort(all(lst))
#define rsortlst(lst) sort(rall(lst))
#define setbits(n) __builtin_popcount(n)
#define sortarr(x, n) sort(x, x + n)
#define sz(lst) (int)lst.size()
typedef pair<ll, ll> pl;
typedef pair<int, int> pi;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vl> vovl;
typedef vector<vi> vovi;
typedef vector<string> vs;
typedef set<ll> sl;
typedef map<ll, ll> ml;
typedef map<int, int> mi;
const ll inf = INT64_MAX, MOD = 1e9 + 7, N = 4e6 + 5;
int main(int argc, char const *argv[])
{
    boost;
    int phi[N], ans[N];
    fora(i, 0, N)
    {
        phi[i] = i;
        ans[i] = 0;
    }
    fora(p, 2, N)
    {
        if (phi[p] == p)
        {
            phi[p] = p - 1;
            for (int i = 2 * p; i < N; i += p)
                phi[i] = (phi[i] / p) * (p - 1);
        }
    }
    fora(i, 1, N)
    {
        ans[i] += i - 1;
        for (int j = 2 * i; j < N; j += i)
            ans[j] += i * ((1 + phi[j / i]) / 2);
    }
    tests
    {
        int k; input(k);
        wrt(ans[4 * k + 1]);
    }
    return 0;
}