#include<iostream>
#include<bits/stdc++.h>
#include<unordered_set>
#include<unordered_map>
using namespace std;

#define ll                  long long int 
#define llmin               -1e18
#define ff                  first
#define ss                  second
#define pb                  push_back
#define vi                  vector<int>
#define take(a,n)           vector <int> a; for(int i=0;i<n;i++){int aa; cin>>aa; a.pb(aa);}
#define vll                 vector<ll> 
#define full(a)             (a.begin(),a.end())
#define vc                  vector<char>
#define iz(n)               int n; cin>>n;
#define iz2(n,m)             int n,m; cin>>n>>m;
#define mii                 map<int,int>
#define setbits(x)          __builtin_popcountll(x)
#define zerobits(x)         __builtin_ctzll(x)    //zeros before first 1
#define com                 int t; cin>>t; while(t--)
#define forn(n)             for(int i=0;i<n;i++)
#define fo(x,y)             for(int i=x;i<y;i++)


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    
    
    int n,k;
    cin>>n>>k;
    int res=0;
    take(a,n);
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(a[i]<=k) count++;
        else break;
    }
    if(count!=n && a[n-1]<=k){
        int c=0;
        for (int i = n-1; i >= 0; i--)
    {
        if(a[i]<=k) c++;
        else break;
    }
    count+=c;
    }
    res=max(count,res);
    count=0;
    for (int i = n-1; i >= 0; i--)
    {
        if(a[i]<=k) count++;
        else break;
    }
    if(count!=n && a[0]<=k){
        int c=0;
        for (int i = 0; i < n; i++)
    {
        if(a[i]<=k) c++;
        else break;
    }
    count+=c;
    }
    res=max(res,count);
    cout<<res;
    
    
    return 0;
}