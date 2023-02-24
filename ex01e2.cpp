#include <iostream>
#include <vector>
using namespace std;

int max_contiguous_sum_prefix(vector<int>& arr) {
    int n = arr.size();
    vector<int> prefix_sum(n);
    prefix_sum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i-1] + arr[i];
    }
    int max_sum = arr[0];
    int min_prefix_sum = 0;
    for (int i = 0; i < n; i++) {
        max_sum = max(max_sum, prefix_sum[i] - min_prefix_sum);
        min_prefix_sum = min(min_prefix_sum, prefix_sum[i]);
    }
    return max_sum;
}

int main(){
    int n,t;
    vector<int> v;
    cin >> n;
    while (n--){
        cin >> t;
        v.push_back(t);
    }
    cout << max_contiguous_sum_prefix(v);
}