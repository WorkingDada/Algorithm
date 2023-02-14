#include <iostream>
#include <cmath>
using namespace std;

int tmod(int a,int n,int k){
    if (n == 1) return a % k;
    if (n % 2 == 0) {
        int res = tmod(a,n/2,k); 
        return (res*res)%k;
    }
    int res = tmod(a,n/2,k);
    res = (res*res)%k;
    return (res*(a%k))%k;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x,n,k;

    cin >> x >> n >> k;
    cout << tmod(x,n,k);
}