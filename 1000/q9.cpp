#include<bits/stdc++.h>
using namespace std;


int smallestDivisor(long long n) {
    if (n % 2 == 0) return 2;
    for (int i = 3; 1LL * i * i <= n; i += 2) {
        if (n % i == 0)
            return i;
    }
    return n; // n is prime
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
        if(n%2 == 0){
            cout<<n/2 <<" "<<n/2<<endl;
            continue;
        }
        int a = 1;
        int b = n-1;
        for(int i = 3; i*i<=n; i++){
            if(n%i == 0){
                a = n/i;
                b = n-a;
                break;
            }
        }
        cout<<a<<" "<<b<<endl;
        
    }
}