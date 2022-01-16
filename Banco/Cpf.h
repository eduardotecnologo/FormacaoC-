//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_CPF_H
#define BANCO_CPF_H
#pragma once
#include <string>

class Cpf{
private:
    std::string numero;
public:
    Cpf(std::string numero);
    std::string getNumero();
};




#endif //BANCO_CPF_H
