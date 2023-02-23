#include <iostream>
#include <vector>
using namespace std;

int bsearch(int k,vector<int> &v,int start,int stop){
  if (start == stop) return k == v[start] ? start : -1;
  int m = (start + stop) >> 1;
  if (v[m] >= k) return bsearch(k,v,start,m);
  else return bsearch(k,v,m+1,stop);
}

int main(){
  int n,m,i;
  vector<int> v;
  cin >> n >> m;
  while (n--){
    cin >> i;
    v.push_back(i);
  }
  while (m--){
    cin >> i;
    if (i > v[v.size()-1]){ cout << v[v.size()-1] << "\n"; }
    else if (i < v[0]) { cout << "-1" << "\n"; }
    else { cout << bsearch(i,v,0,v.size()-1) << "\n"; }
  }
}