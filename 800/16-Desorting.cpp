#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int mind=INT_MAX,ind=0;
        for(int i=1;i<n;i++){
            if(arr[i]-arr[i-1]<mind){
        mind=min(mind,arr[i]-arr[i-1]);
        ind=i-1;
            }
        }
        if(!is_sorted(arr.begin(),arr.end())) cout<<0<<endl;
        else cout<<((arr[ind+1]-arr[ind]) /2)+1<<endl; 
    }
}
int main(){
    solve();
    return 0;
}