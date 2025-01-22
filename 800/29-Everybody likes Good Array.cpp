#include <bits/stdc++.h>
    #define ll long long
    using namespace std;
    int main(){
       ll t; cin>>t;
       while(t--){
        ll n; cin>>n;
        if(n==0){
            cout<<"0"<<endl;
            break;
        }
        vector<ll>v(n);
        ll count=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=1;i<n;i++){
            if(v[i]%2==v[i-1]%2) count++;
        }
        cout<<count<<endl;
       }
    }