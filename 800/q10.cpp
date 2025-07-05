#include<iostream>
#include<vector>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    const int score[10][10] = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1 },
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, 
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
    };

    int a;
    cin>>a;
    while(a--){
        vector<vector<char>>arr(10,vector<char>(10));
        for(int i = 0; i<10; i++){
            for(int j = 0; j<10; j++){
                cin>>arr[i][j];
            }
        }

        int count = 0;
        for(int i = 0; i < 10; ++i){
            for(int j = 0; j < 10; ++j){
                if(arr[i][j] == 'X'){
                   count += score[i][j];
                }
            }
        }
        cout<<count<<endl;
    }

}