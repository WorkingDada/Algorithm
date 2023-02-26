#include <bits/stdc++.h>
using namespace std;

int n,m;
int coin_index[21];
vector<int> dp;

int solve(int amount){
    for (int i = 1 ; i < amount + 1 ; i++){
        for (int j = 0  ; j < n ; j++){
            if (i-coin_index[j]>=0){
                dp[i] = min(dp[i],1 + dp[i-coin_index[j]]);
            }
        }
    }
    if (dp[amount] != amount ) return dp[amount];
    else return -1;
}

int main(){
    cin >> n >> m;
    dp = vector<int>(m+1,m+1);
    dp[0] = 0;
    for (int i = 0 ; i < n ; i++){
        cin >> coin_index[i];
    }
    cout << solve(m);
}