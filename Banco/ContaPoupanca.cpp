//
// Created by EduDeveloper on 16/01/2022.
//

#include "ContaPoupanca.h"
#include <iostream>

ContaPoupanca::ContaPoupanca(std::string numero, Titular titular):Conta(numero, titular){

}

float ContaPoupanca::taxaDeSaque() const {
    std::cout << "Chamando método sacar da conta poupança: " << std::endl;
    return 0.03;
}

