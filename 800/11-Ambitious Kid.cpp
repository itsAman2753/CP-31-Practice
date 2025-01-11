#include<bits/stdc++.h>
using namespace std;

//make any one no=0 whichever is more closer to 0 and print it
void solve(){
    int n; cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    int mini=INT_MAX;
    for(int i=0;i<n;i++){
        mini=min(mini,abs(arr[i]-0));
    }
    cout<<mini<<endl;
}
int main(){
    solve();
    return 0;
}