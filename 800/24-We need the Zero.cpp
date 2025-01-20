#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int xr=accumulate(arr.begin(),arr.end(),0,bit_xor<int>());
        if(n%2!=0) cout<<xr<<endl;
        else{
            if(xr==0) cout<<0<<endl;
            else cout<<-1<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}