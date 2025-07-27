#include<bits/stdc++.h>
using namespace std;

long long solve(int n, int k){
    long long ans = 0;
    if (k > n) return 0;
    for(int i = k-1; i < n; i++){
        ans += (n - i);
    }
    return ans;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;
    while(t--){
        long long n, k, q;
        cin >> n >> k >> q;
        vector<long long> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        long long count = 0;
        long long total = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] > q){
                if(count > 0){
                    total += solve(count, k);
                    count = 0;
                }
            } else {
                count++;
            }
        }

        if(count > 0){
            total += solve(count, k);
        }

        cout << total << endl;
    }
}
