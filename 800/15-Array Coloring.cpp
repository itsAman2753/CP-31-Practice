#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
    int n;cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    long long sum=0;
    for(int i=0;i<n;i++) sum+=arr[i];
    if(sum%2==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
}
int main(){
    solve();
    return 0;
}