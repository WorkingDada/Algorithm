#include <iostream>
#include <vector>
using namespace std;
int bsearch(int k,vector<int> &v,int start,int stop){
    if (k >= v[stop]) return stop;
    if (stop - start <= 1) {
        return k >= v[stop] ? stop : k >= v[start] ? start : -1;
    }
    int m = (start + stop) >> 1;
    if (k >= v[m]) bsearch(k,v,m,stop);
    else bsearch(k,v,start,m);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,i;
    vector<int> v;
    cin >> n >> m;
    while (n--){
        cin >> i;
        v.push_back(i);
    }
    while (m--){
        cin >> i;
        if (i > v[v.size()-1]) cout << v.size()-1 << "\n";
        else if (i < v[0]) cout << "-1\n";
        else cout << bsearch(i,v,0,v.size()-1) << "\n";
    }
}