//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_PESSOA_H
#define BANCO_PESSOA_H
#pragma once
#include "Cpf.h"
#include <string>

class Pessoa{
protected:
    Cpf cpf;
    std::string nome;
public:
    Pessoa(Cpf cpf, std::string nome);
private:
    void verificaTamanhoNome();
};


#endif //BANCO_PESSOA_H
