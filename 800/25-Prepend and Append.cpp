#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        string s; cin>>s;
        int i=0,j=s.size()-1;
        while(i<j&&s[i]!=s[j]){
            i++;
            j--;
           
        }
        cout<<j-i+1<<endl;
    }
}
int main(){
    solve();
    return 0;
}