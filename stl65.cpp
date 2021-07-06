<<<<<<< HEAD
#include<bits/stdc++.h>

using namespace std;

// #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define ll long long int

#define pb push_back


int main()

{ 

    // fast;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;

    cin >> t;

    while(t--){

        ll n , m;

        cin >> n >> m;

        ll ans = 0;

        std::vector<ll> mod(n+1,1);

        for(ll i = 2; i <= n; i++){

            ll a = m%i;

            ans+=mod[a];

            for( ll j = a; j <= n; j+=i ){

                mod[j]++;

            }

        }

        cout << ans << "\n";

    }

return 0;

}

=======
#include<bits/stdc++.h>

using namespace std;

// #define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

#define ll long long int

#define pb push_back


int main()

{ 

    // fast;
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t;

    cin >> t;

    while(t--){

        ll n , m;

        cin >> n >> m;

        ll ans = 0;

        std::vector<ll> mod(n+1,1);

        for(ll i = 2; i <= n; i++){

            ll a = m%i;

            ans+=mod[a];

            for( ll j = a; j <= n; j+=i ){

                mod[j]++;

            }

        }

        cout << ans << "\n";

    }

return 0;

}

>>>>>>> adbe25192af96d8a004f11cd7b031817436b8c60
