#include<iostream>
#include<math.h>

int factorial(int n)
{
  return (n == 1 || n == 0) ? 1 : factorial(n - 1) * n;
}

int main(){
    int a,b,n;
    std::cin >> a >> b;
    n = factorial(b)/(factorial(b-a)*factorial(a));
    while (n--){
        std::cout << "Hello";
    }
}