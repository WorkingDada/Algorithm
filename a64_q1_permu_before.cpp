#include <iostream>
#include <vector>
using namespace std;

void perm_kn(int n,vector<int> &sol,int len,vector<bool> &used,int k) {
    if (len < k) {
        for (int i = 1;i<=n;i++) {
            if (used[i] == false) {
                used[i] = true;
                sol[len] = i;
                perm_kn(n,sol,len+1,used,k);
                used[i] = false;
            }
        }
    } else {
        for (auto &x : sol) cout << x;
        cout << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    perm_kn(3)
}