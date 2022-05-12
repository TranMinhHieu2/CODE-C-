#include <bits/stdc++.h>
using namespace std;
int main (){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        for(int j=0;j<n;j++){
            cout<<a[0][j]<<" ";
        }
        cout<<endl;
        for(int i=1;i<n-1;i++){
            for(int j=0;j<n;j++){
                if(j==0) cout<<a[i][j]<<" ";
                if(j==n-1) cout<<" "<<a[i][j];
                else cout<<" ";
            }
            cout<<endl;
        }
        for(int j=0;j<n;j++){
            cout<<a[n-1][j]<<" ";
        }
        cout<<endl;
    }
}
