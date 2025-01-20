#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(d<b) cout<<-1<<endl;
        else {
            if(c>a+(d-b)) cout<<-1<<endl;
            else cout<< 2*(d-b)+a-c<<endl;
        }
        
        
    }
}
int main(){
    solve();
    return 0;
}