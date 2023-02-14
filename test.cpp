#include <iostream>
using namespace std;

int x = 10;

int f(){
    return x;
}

int g(){
    x = 20;
    return f();
}

int main(){
    cout << g();
}