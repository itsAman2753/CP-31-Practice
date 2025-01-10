#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        map<int,int>mpp;
        bool flag=true;
        for(int i=0;i<n;i++) {
            mpp[arr[i]]++;
            if(mpp.size()>2){
            flag=false;
            break;
            }         
    }
    if(mpp.size()==2){
                int f1=begin(mpp)->second;
                if(f1!=n/2&& f1!=(n+1)/2) flag=false;
            }
            if(flag) cout<<"Yes"<<endl;
            else cout<<"No"<<endl;
}
}
int main(){
    solve();
    return 0;
}