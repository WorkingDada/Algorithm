#include <iostream>
#include <cmath>
using namespace std;

bool isVirus(string text,int k,int ones){

    if (k == 1){
        return true;
    }

    int middle = (text.size()+1)/2;
    string front = text.substr(0,middle);
    string back = text.substr(middle);
    
    int oneFirstHalf = 0;
    for (auto &c : front){
        if (c == '1'){
            oneFirstHalf++;
        }
    }    

    if (abs(2*oneFirstHalf - ones) > 1) return false;

    return isVirus(front,k-1,oneFirstHalf) && isVirus(back,k-1,ones - oneFirstHalf);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,k;
    cin >> n >> k;
    for (int i = 0 ; i < n ; i++){
        string text;
        int count = 0;
        for (int j = 0 ; j < pow(2,k) ; j++){
            char c;
            cin >> c;
            if (c == '1'){
                count++;
            }
            text.push_back(c);
        }
        if (isVirus(text,k,count)){
            cout << "yes\n";
        } else {
            cout << "no\n";
        }
    }
}