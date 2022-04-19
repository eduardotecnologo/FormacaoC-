//
// Created by EduDeveloper on 16/01/2022.
//

#include <iostream>
#include "Pessoa.h"

Pessoa::Pessoa(Cpf cpf, std::string nome):cpf(cpf), nome(nome){
    //std::cout << "Construtor de Pessoa: " << std::endl;
    verificaTamanhoNome();
}

std::string Pessoa::recuperaNome() const{
    return nome;
}

void Pessoa::verificaTamanhoNome(){
    if(nome.size() < 5){
        setlocale(LC_ALL, "portuguese");
        std::cout << "Ops! Nome muito curto." << std::endl;
        exit(1);
    }
}

