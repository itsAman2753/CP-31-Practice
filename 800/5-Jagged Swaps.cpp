#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(a[0]!=1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
int main(){
    solve();
    return 0;
}