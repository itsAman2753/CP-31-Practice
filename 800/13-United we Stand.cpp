#include<bits/stdc++.h>
using namespace std;

void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        map<int,int>mpp;
        for(int i=0;i<n;i++) mpp[arr[i]]++;
        if(mpp.size()==1) cout<<-1<<endl;
        else{
            int ele=begin(mpp)->first;
            int freq=begin(mpp)->second;
            cout<<freq<<" "<<n-freq<<endl;
            for(int i=0;i<freq;i++) cout<<ele<<" ";
            cout<<endl;
            mpp.erase(ele);
            for( auto [e,f]:mpp){
                for(int i=0;i<f;i++) cout<<e<<" ";
            }
            cout<<endl;
        }
    }
}
int main(){
    solve();
    return 0;
}