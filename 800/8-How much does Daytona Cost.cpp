#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        bool found =false;
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) if(a[i]==k) found=true;
        if(found) cout<<"Yes"<<endl;
        else cout<<"NO"<<endl;
    }
}
int main(){
    solve();
    return 0;
}