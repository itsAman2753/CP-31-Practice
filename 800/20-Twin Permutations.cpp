#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>ans(n);
        for(int i=0;i<n;i++) cin>>ans[i];
        for(int i=0;i<n;i++) cout<<n+1-ans[i]<<" ";
        cout<<endl;
        
    }
}
int main(){
    solve();
    return 0;
}