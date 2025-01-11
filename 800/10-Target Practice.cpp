#include<bits/stdc++.h>
using namespace std;
void solve(){
    int t; cin>>t;
    while(t--){
        char target[10][10];
        for(int i=0;i<10;i++)    for(int j=0;j<10;j++) cin>>target[i][j];
        int ans=0;
        int board[10][10]={ {1,1,1,1,1,1,1,1,1,1}, {1,2,2,2,2,2,2,2,2,1}, {1,2,3,3,3,3,3,3,2,1}, {1,2,3,4,4,4,4,3,2,1}, {1,2,3,4,5,5,4,3,2,1},
         {1,2,3,4,5,5,4,3,2,1},
            {1,2,3,4,4,4,4,3,2,1},
            {1,2,3,3,3,3,3,3,2,1},
            {1,2,2,2,2,2,2,2,2,1},
            {1,1,1,1,1,1,1,1,1,1},
        };

       for(int i=0;i<10;i++) for(int j=0;j<10;j++)  if(target[i][j]!='.') ans+=board[i][j];
        cout<<ans<<endl;
            
    }
}
int main(){
    solve();
    return 0;
}