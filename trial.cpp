#include <iostream>
using namespace std;

int bino_naive(int n,int r){
    if (r == n) return 1;
    if (r == 0) return 1;

    int result = bino_naive(n-1,r) + bino_naive(n-1,r-1);
    return result;
}

// int bino_memoize(int n,int r){
//     if (r == n) return 1;
//     if (r == 0) return 1;

//     if (table[n][r] != -1){
//         return table[n][r];
//     }

//     int result = bino_memoize(n-1,r) + bino_memoize(n-1,r-1);
//     table[n][r] = result;

//     return result;
// }

int main(){
    cout << bino_naive(10000,2);
}