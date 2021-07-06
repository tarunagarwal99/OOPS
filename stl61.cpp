<<<<<<< HEAD
#include<iostream>
using namespace std;
#define ll long long

ll fastExponent(ll a ,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a);
        }
        a=a*a;
        b=b>>1;
    }
    return res;
}
int main() {
    cout<<fastExponent(2,4);
    
    return 0;
=======
#include<iostream>
using namespace std;
#define ll long long

ll fastExponent(ll a ,ll b){
    ll res=1;
    while(b>0){
        if(b&1){
            res=(res*a);
        }
        a=a*a;
        b=b>>1;
    }
    return res;
}
int main() {
    cout<<fastExponent(2,4);
    
    return 0;
>>>>>>> adbe25192af96d8a004f11cd7b031817436b8c60
}