#include <iostream>
#include <vector>
#define pii pair<int,int>

using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n,m,t1,t2;
    cin >> n >> m;
    vector<pii> v(n);
    vector<int> q(m);
    for (int i = 0 ; i < n ; i++){
        cin >> t1 >> t2;
        v[i] = make_pair(t1,t2);
    }
    for (int i = 0 ; i < m ; i++){
        cin >> q[i];
    }
    for (int j = 0 ; j < m ; j++){
        int temp = q[j];
        for (int i = 0 ; i < v.size() ; i++){
            temp -= v[i].second;
            if (temp <= 0 || i - 1 == n){
                cout << v[i].first << "\n";
                break;
            }
        }
    }
}