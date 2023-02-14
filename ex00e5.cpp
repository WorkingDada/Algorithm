#include <iostream>
#include <string>

int n,m;
std::string one = "1";

void check(std::string text){
    int count = 0;
    for (int i = 0 ; i < text.size() ; i++){
        if (text[i] == one[0]){
            count++;
            if (count >= m){
                std::cout << text << "\n";
                return;
            }
        } else {
            count = 0;
        }
    }
}

void generate_binary(int maxLenght,int lenght,std::string text){
    if (lenght < maxLenght){
        generate_binary(maxLenght,lenght+1,text+"0");
        generate_binary(maxLenght,lenght+1,text+"1");
    } else {
        check(text);
    }
}


int main(){
    std::cin >> n >> m;
    generate_binary(n,0,"");
}