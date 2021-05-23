
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define MODVAL 1000000007




ll powe(ll n, ll a, ll mod){

    ll res = 1;

    n = n % mod;

    if (n == 0) return 0;

    while (a > 0){

        if(a&1)

            res = (res*n)%mod;

        a >>= 1;

        n = (n*n)%mod;

    }

    return res;

}

int main() {

    int t;

    cin>>t;

    while(t--){

        ll n;

        cin>>n;
 
        ll resultVal = powe(2,n-1, MODVAL);

        cout<<resultVal<<endl;

    }

    return 0;

}