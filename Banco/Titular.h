//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_TITULAR_H
#define BANCO_TITULAR_H
#pragma once
#include <string>
#include "Autenticavel.h"
#include "Pessoa.h"
#include "Cpf.h"

class Titular : public Pessoa, public Autenticavel{
    public:
        Titular(Cpf cpf, std::string nome, std::string senha);
};
#endif //BANCO_TITULAR_H
