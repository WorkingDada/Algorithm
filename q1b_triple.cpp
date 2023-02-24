#include <iostream>
#include <vector>
using namespace std;

int mss_prefix_sum(vector<int> &a,vector<int> &s){
    s[0] = 0;
    int sum = 0;
    for (int i=0;i<s.size();i++){
        sum+=a[i];
        s[i]=sum;
    }
    int max = a[1];
    for (int i=0;i<s.size();i++){
        for(int j=i;j<s.size();j++){
            sum+=s[j]-s[i-1];
            if (sum>max){
                max = sum;
            }
        }
    }
    return max;
}

int main(){
    int n,m,t;
    int i = 0;
    cin >> n;
    vector<int> A;
    vector<int> S;
    while (n--){
        cin >> t;
        A.push_back(t);
    }
    cout << mss_prefix_sum(A,S);
}