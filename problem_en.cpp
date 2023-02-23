#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int find_max(vector<int> v){
    
    return ;
}

int main(){
    int n,t;
    vector<int> v;
    cin >> n;
    while(n--){
        cin >> t;
        v.push_back(t);
    }
    sort(v.begin(),v.end());
    cout << find_max(v);
}