#include <iostream>
#include <vector>

std::vector<char> chuteerror;

void imprime_error(){
    sdt::cout << "Chutes errados: ";
    for(char letra: chuteerror){
        sdt::cout << letra << " ";
    }
    sdt::cout << sdt::endl;
}