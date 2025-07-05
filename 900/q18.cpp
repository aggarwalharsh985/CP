#include<iostream>
#include <cmath>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;

        long double k1,k2,k3;
        k1 = ((2.0*b)-c)/a;
        k3 = ((2.0*b)-a)/c;
        k2 = (a+c)/(2.0*b);

        if ((k1 > 0 && floor(k1) == k1) ||
            (k2 > 0 && floor(k2) == k2) ||
            (k3 > 0 && floor(k3) == k3)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

}