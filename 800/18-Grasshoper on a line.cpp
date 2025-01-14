#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<endl<<x<<endl;
        }
        else{
            cout<<2<<endl;
            cout<<x-1<<" "<<1<<endl;
        }  
    }
}
int main(){
    solve();
    return 0;
}