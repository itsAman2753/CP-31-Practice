#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int s=0;
        vector<int>a(n);
        for(int i=0;i<n-1;i++) {
            cin>>a[i];
            s+=a[i];
            }
            cout<<-s<<endl;
        }
}
int main(){
    solve();
    return 0;
}