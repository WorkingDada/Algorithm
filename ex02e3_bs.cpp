#include <iostream>
#include <vector>
using namespace std;

int bsearch(int k,vector<int> v){
  if (k == v[v.size()-1]) return v.size()-1;
  if (k == v[0]) return 0;
  for (int i = v.size()-1 ; i >= 0 ; i--){
    if (k == v[i]) return i;
  }
  return -1;
}

int main(){
  int n,m,i;
  vector<int> v;
  while (n--){
    cin >> i;
    v.push_back(i);
  }
  while (m--){
    cin >> i;
    cout << bsearch(i,v) << "\n";
  }
}