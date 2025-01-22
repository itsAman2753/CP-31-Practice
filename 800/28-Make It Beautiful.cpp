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
        if(arr[0]==arr[n-1]) cout<<"NO"<<endl;
        else {
            cout<<"YES"<<endl;
            vector<int>temp;
            temp.push_back(arr[n-1]);
            for(int i=0;i<n-1;i++) temp.push_back(arr[i]);
            for(int i=0;i<n;i++) cout<<temp[i]<<" ";
            cout<<endl;
        }
       
    }
}
int main(){
    solve();
    return 0;
}
