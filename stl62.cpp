//modular equation code



#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#define ll long long int


int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    ll t;
     cin>>t;

        while(t--){
            ll N,M;

            cin>>N>>M;

            ll ans=0;

            vector<ll> res(N+1,1);

            for(ll i=2;i<=N;i++){

                ll a=M%i;

                ans+=res[a];

                for(ll j=a;j<=N;j+=i){

                    res[j]++;
                    }
                }
             cout<<ans<<endl;
        }
        return 0;
}