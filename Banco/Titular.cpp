//
// Created by EduDeveloper on 16/01/2022.
//

#include "Titular.h"
#include <iostream>

Titular::Titular(Cpf cpf, std::string nome, std::string senha)
    :Pessoa(cpf, nome), Autenticavel(senha){
}

