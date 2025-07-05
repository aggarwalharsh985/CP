#include<iostream>
#include<vector>
#include<set>
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
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        if(n == 1 || n == 2){
            cout<<"Yes"<<endl;
            continue;
        }

        set<int>st(arr.begin(),arr.end());
        int setSize = st.size();
        if(setSize > 2){
            cout<<"No"<<endl;
            continue;
        }

        int count1st = 0;
        int count2nd = 0;
        for(int i = 0; i<n; i++){
            if(arr[0] == arr[i]){
                count1st++;
            }
            else{
                count2nd++;
            }
        }
        if(count1st == n || count2nd == n){
            cout<<"Yes"<<endl;
        }
        else if(count2nd + 1 == count1st || count2nd == count1st || count2nd - 1 == count1st){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}