#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>ans(n);
        for(int i=0;i<n;i++) cin>>ans[i];
        int c=0,maxi=0;
        for(int i=0;i<n;i++){
            if(ans[i]==0) c++;
            else{
                maxi=max(maxi,c);
                c=0;
            }
            maxi=max(maxi,c);
        }
        cout<<maxi<<endl;
        
    }
}
int main(){
    solve();
    return 0;
}