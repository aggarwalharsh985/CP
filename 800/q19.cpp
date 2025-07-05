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
        int n;
        cin>>n;
        vector<int>arr(n);
        int sum = 0;
        int count1 = 0;
        int countN1 = 0;
        int ans = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            sum += arr[i];
            if(arr[i] == 1){
                count1++;
            }
            else{
                countN1++;
            }
        }

        if(sum >= 0 && countN1%2 == 0){
            cout<<ans<<endl;
            continue;
        }

        if(countN1%2 != 0 ){
            countN1--;
            count1++;
            ans++;
        }
        if(countN1>count1){
            while(count1<countN1){
                count1+=2;
                countN1-=2;
                ans+= 2;
            }
        }
        cout<<ans<<endl;
    }

}