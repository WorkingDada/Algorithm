#include <bits/stdc++.h>
using namespace std;

int n,m,k;
int table[31][31][31][2];

int gen_barcode(int len,int consec,int change,int c){
    if (len > n || consec >= m || k-change > n-len) return 0;
    if (table[len][consec][change][c] != 0) return table[len][consec][change][c];
    if (len == n-1) return change == k;
    if (c) {
        int val = gen_barcode(len+1,consec+1,change,1) + gen_barcode(len+1,0,change+1,0);
        table[len][consec][change][c] = val;
        return val;
    } else {
        int val = gen_barcode(len+1,consec+1,change,0) + gen_barcode(len+1,0,change+1,1);
        table[len][consec][change][c] = val;
        return val;
    }
}

int main(){
    cin >> n >> m >> k;
    cout << gen_barcode(0,0,0,0);//0 for B, 1 for W
}