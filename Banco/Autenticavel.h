//
// Created by EduDeveloper on 16/01/2022.
//

#ifndef BANCO_AUTENTICAVEL_H
#define BANCO_AUTENTICAVEL_H
#include <string>

class Autenticavel{
    private:
        std::string senha;
public:
    Autenticavel(std::string senha);
    bool autentica(std::string senha)const;
};


#endif //BANCO_AUTENTICAVEL_H
