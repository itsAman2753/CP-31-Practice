#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>ans(n);
        for(int i=0;i<n;i++) cin>>ans[i];
        int f1=0,f2=0;
        for(int i=0;i<n;i++){
            if(ans[i]==-1) f1++;
            else f2++;
        }
        if(f1<=f2){
            if(f1%2==0) cout<<0<<endl;
            else cout<<1<<endl;
        }
        else{
            int x=f1-n/2;
            if((n/2)%2==0) cout<<x<<endl;
            else cout<<x+1<<endl;
        }

        
    }
}
int main(){
    solve();
    return 0;
}