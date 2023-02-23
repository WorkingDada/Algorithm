#include <iostream>
#include <vector>
using namespace std;

int bsearch_near(int k,vector<int> &v){
    if (k > v[v.size()-1]) return v[v.size()-1];
    if (k < v[0]) return -1;
    if (k == v[0]) return k;
    for (int i = v.size()-1 ; i >= 0 ; i--){
        if (k >= v[i]){
            return v[i];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,t;
    vector<int> v1,v2;
    cin >> n >> m;
    while(n--){
        cin >> t; v1.push_back(t);
    }
    while(m--){
        cin >> t;
        cout << bsearch_near(t,v1) << "\n" ;
    }
}
