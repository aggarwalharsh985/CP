#include<iostream>
#include<vector>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n,q;
        cin>>n>>q;
        long long sum = 0;
        vector<long long>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        vector<long long>Psum(n+1,0);
        for(int i = 1; i<=n; i++){
            Psum[i] = Psum[i-1] + arr[i-1];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            long long sumR = Psum[r]-Psum[l-1];
            long long sumA = (r-l+1)*k;
            long long sumT = sum-sumR+sumA;
            if(sumT%2 == 0){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }
    }
}