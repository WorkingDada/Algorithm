#include <bits/stdc++.h>
using namespace std;

int dp[10000];
int n;

int solve(int stairs){
    for (int i = 2 ; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[stairs];
}

int main(){
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;
    cout << solve(n);
}
