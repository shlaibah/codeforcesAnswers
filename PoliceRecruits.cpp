#include <iostream>
int main() { 
    int num = 0;
    int output = 0;
    std::cin>>num;
    int input;
    int o = 0;

    for (int i = 0; i < num; i++) {
        std::cin>>input;

        if (input > 0){ 
            o += input;
        }
        if (input == -1) {
            if (o > 0) {
                o -= 1;
            } else {
                output++;
            }
        }
    }
    
    std::cout<<output<<std::endl;

}