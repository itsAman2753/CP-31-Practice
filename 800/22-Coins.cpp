#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        long long n,k; cin>>n>>k;
        if(n%2==0) cout<<"YES"<<endl;
        else{
            if(k%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}