#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
vector<int> v,table;
pii solve(int start){
    if (start >= v.size()) return make_pair(0,0);
    if (table[start] != 0) return make_pair(1,table[start]);
    if (start == v.size()-1) return make_pair(1,v[v.size()-1]);
    auto r1 = solve(start+1);
    auto r2 = solve(start+2);
    auto r3 = solve(start+3);
    int tmp = INT_MIN;
    if (r1.first) tmp = max(tmp,r1.second);
    if (r2.first) tmp = max(tmp,r2.second);
    if (r3.first) tmp = max(tmp,r3.second);
    int ret = v[start] + tmp;
    table[start] = ret;
    return make_pair(r1.first||r2.first||r3.first,ret);
}
int main(){
    int n;
    cin >> n;
    v = vector<int>(n);
    table = vector<int>(n);
    for (int i=0;i<n;i++){
        cin >> v[i];
    }
    cout << solve(0).second << "\n";
}