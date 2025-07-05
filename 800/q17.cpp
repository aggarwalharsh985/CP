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
        int n,k,x;
        cin>>n>>k>>x;
        vector<int>ans;
        int sum = 0;
        
        if(x == 1 && k == 1){
            cout<<"No"<<endl;
            continue;
        }
        if(x != 1){
            while(sum<n){
                ans.push_back(1);
                sum++;
            }
        }
        else if(x == 1){
            if(n % 2 != 0  && k == 2){
                cout<<"No"<<endl;
                continue;
            }
            if(n%2 == 0){
                while(sum<n){
                    ans.push_back(2);
                    sum += 2;
                }
            }
            else{
                ans.push_back(3);
                sum = 3;
                while(sum<n){
                    ans.push_back(2);
                    sum += 2;
                }
            }
        }
        cout<<"Yes"<<endl;
        cout<<ans.size()<<endl;
        for(auto&i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}