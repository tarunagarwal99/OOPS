/*
May long challange 2021
Tree house problem 
code in c++

This code havong error like 
TLE=time limit excedd
RE-runtime error
*/

#include<iostream>
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long int
#define endl "\n"
using namespace std;

bool comparator(pair<ll,ll>& a,pair<ll,ll>& b){
    return a.second > b.second;
} 

int  main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     ll t;
     scanf("%lld",&t);
     while(t--){
         ll n,x;
         scanf("%lld %lld",&n,&x);
         unordered_map<ll,vector<ll>> d;
         for (int i = 2; i < n+1; i++)
         {
            ll u,v;
            scanf("%lld %lld",&u,&v);
            auto itr =d.find(u);
            if(itr->first == u){
                itr->second.push_back(v);
            }
            else{
                vector<ll> l;
                l.push_back(v);
                d.insert({u,l});


            }
         }
         for (auto  i = d.begin(); i !=d.end(); i++)
         {
            vector<pair<ll,ll>> d_new;
            auto v = i->second;
            for (auto x = v.begin(); x !=v.end(); x++)
            {
                ll c=0;
                auto it = d.find(*x);
                if(it->first == *x){
                    c = i->second.size();

                }
                else{
                    c=0;

                }
                d_new.push_back({*x,c});

            }
            sort(d_new.begin(),d_new.end(),comparator);
            vector<ll> l;
            for (auto it =d_new.begin(); it !=d_new.end(); it++)
            {
                l.push_back(it->first);

            }
            i->second = l;

         }
         map<ll,ll> d1;
         for (int i = 1; i < n+1; i++)
         {
            auto ir =d.find(i);
            if(ir->first == i){
               ll num = 0;
               if(i == 1){
                   num = x;
               } 
               else{
                   num = d1.find(i)->second;

               }
               int j = 1;
               for (  auto  itr = ir->second.begin(); itr !=ir->second.end(); itr++)
               {
                   d1.insert({ *itr,num*j});
                   j++;
               }
               
            }
         }
         ll sum = x;
         for (  auto itr = d1.begin(); itr!=d1.end(); itr++)
         {
             sum += itr->second;
             sum =sum%1000000007;

         }
         cout<<sum%1000000007<<endl;

    }
    
    return 0;
}