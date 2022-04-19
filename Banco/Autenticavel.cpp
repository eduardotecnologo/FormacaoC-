//
// Created by EduDeveloper on 16/01/2022.
//

#include "Autenticavel.h"

Autenticavel::Autenticavel(std::string senha):senha(senha){

}

bool Autenticavel::autentica(std::string senha) const {
    return senha == this->senha;
}
