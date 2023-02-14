#include <iostream>
#include <cmath>
#include <algorithm>

int n,k;

bool isVirus(std::string text,int k){
    if (k == 1){
        return text == "01";
    }

    int m = (text.size()+1)/2;
    std::string front = text.substr(0,m);
    std::string back = text.substr(m);
    std::string reverseFront = front;
    std::reverse(reverseFront.begin(),reverseFront.end());

    return ((isVirus(front,k-1) || isVirus(reverseFront,k-1)) && isVirus(back,k-1));
}

int main(){
    std::cin >> n >> k;
    for (int i = 0 ; i < n ; i++){
        std::string text;
        for (int j = 0 ; j < pow(2,k) ; j++){
            char c;
            std::cin >> c;
            text.push_back(c);
        }
        if (isVirus(text,k)){
            std::cout << "yes\n";
        } else {
            std::cout << "no\n";
        }
    }
}