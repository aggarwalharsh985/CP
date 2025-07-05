#include<iostream>
#include<vector>
using namespace std;
// bool check(int n){
//     int c = 0;
//     int ans = 0;
//     while(n>0){
//         ans = n%10;
//         if(ans > 0){
//             c++;
//         }
//         if(c>1){
//             return false;
//         }
//         n = n/10;
//     }
//     return true;
// }

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // vector<long long>arr;
    // for(long long i = 1; i<999999; i++){
    //     if(check(i)){
    //         arr.push_back(i);
    //     }
    // }


    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        int count = 0;
        // for(int i = 0; i<arr.size(); i++){
        //     if(arr[i] <= n){
        //         count++;
        //     }
        //     else{
        //         break;
        //     }
        // }
        for(int i = 1; i<10; i++){
            int num = i;
            while(num <= n){
                count++;
                num *= 10;
            }
        }
        cout<<count<<endl;
    }

}