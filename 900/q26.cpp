#include<bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(long long n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n%2 != 0){
            cout<<"Yes"<<endl;
        }
        else{
            if(isPowerOfTwo(n)){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
}