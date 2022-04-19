#include <fstream>

#include "le_arquivo.h"

std::vector<std::string> le_arquivo() {
    std::ifstream arquivo;
    arquivo.open("palavras.txt");

    if (!arquivo.is_open()) {
        int quantidade_palavras;
        arquivo >> quantidade_palavras;
        
        std::vector<std::string> palavras_de_arquivo;
        
        for (int i = 0; i < quantidade_palavras; i++) {
			std::string palavra_lida;
			arquivo >> palavra_lida;
			palavras_de_arquivo.push_back(palavra_lida);
		}
		arquivo.close();
		return palavras_de_arquivo;
	}else{
		std::cout << "Não foi possível acessar o banco de palavras." << std::endl;
		exit(0);
	}
}