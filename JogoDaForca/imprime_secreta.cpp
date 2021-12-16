#include <iostream>

std::string palavrasecreta;


void imprime_secreta(){
    for(char letra : palavrasecreta){
        if(chutou[letra]){
            std::cout << letra << " ";
        }else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
}