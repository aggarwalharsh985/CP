#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        vector<int>c(2*n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        vector<int>aa(2*n +1,0);
        vector<int>bb(2*n +1,0);
        int counter = 1;
        for(int i = 1; i<n; i++){
            if(a[i] == a[i-1]){
                counter++;
            }
            else{
                aa[a[i-1]] = max(aa[a[i-1]],counter);
                counter = 1;
            }
        }
        aa[a[n-1]] = max(aa[a[n-1]],counter);
        counter = 1;
        for(int i = 1; i<n; i++){
            if(b[i] == b[i-1]){
                counter++;
            }
            else{
                bb[b[i-1]] = max(bb[b[i-1]],counter);
                counter = 1;
            }
        }
        bb[b[n-1]] = max(bb[b[n-1]],counter);
        int maxi = INT_MIN;
        for(int i = 1; i<2*n +1; i++){
            maxi = max(maxi,aa[i]+bb[i]);
        }
        cout<<maxi<<endl;
          
    }

}