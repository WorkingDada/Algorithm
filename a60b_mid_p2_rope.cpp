#include <bits/stdc++.h>
using namespace std;

int n,a,b,c;
int table[4001];

int solve(int length){
    if (length == 0) return 0;
    if (length < 0 ) return INT_MIN;
    if (table[length]) return table[length];
    int r1,r2,r3;
    r1 = solve(length-a);
    r2 = solve(length-b);
    r3 = solve(length-c);
    int m = max({r1,r2,r3});
    table[length] = ++m;
    return m;
}

int main(){
    cin >> n >> a >> b >> c;
    cout << solve(n);
}