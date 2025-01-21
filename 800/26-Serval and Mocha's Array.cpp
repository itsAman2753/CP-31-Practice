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
        bool yes=false;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(__gcd(arr[i],arr[j])<=2){
                    yes=true;
                    break;
                }
            }
        }
        if(yes) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
}
int main(){
    solve();
    return 0;
}
