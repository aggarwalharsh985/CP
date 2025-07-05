int solve(int n, int k){
    int ans = 0;
    for(int i = k-1; i<n; i++){
        ans += (n-i);
    }
    return ans;
}