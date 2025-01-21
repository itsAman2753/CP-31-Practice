#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int i;
        for(i=0;i<n;i++){
            int c1=0,c2=0;
            for(int j=0;j<=i;j++) if(arr[j]==2) c1++;
            for(int l=n-1;l>i;l--) if(arr[l]==2) c2++;
            if(c1==c2) break;
        }
        if(i<n) cout<<i+1<<endl;
        else cout<<"-1"<<endl;
    }
}
int main(){
    solve();
    return 0;
}
