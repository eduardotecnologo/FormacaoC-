#include <iostream>
#include <string>
#include <locale>
#include "DiaDaSemana.h"
#include "Gerente.h"
#include "Conta.h"
#include "ContaPoupanca.h"
#include "ContaCorrente.h"
#include "Titular.h"
#include "Cpf.h"
#include "Funcionario.h"

using namespace std;

void ExibeSaldo(const Conta& conta){
    setlocale(LC_ALL, "portuguese");
    std::cout << "O saldo da conta é: " << conta.recuperaSaldo() << std::endl;
}

void RealizaSaque(Conta& conta){
    conta.sacar(200);
}

void FazLogin(Autenticavel& alguem, string senha){
    if(alguem.autentica(senha)){
        std::cout << "Login realizado com sucesso!" << std::endl;
    }else{
        setlocale(LC_ALL, "portuguese");
        std::cout << "Ops! Senha inválida!" << std::endl;
    }
}

ostream& operator << (ostream& cout, const Conta& conta){
    Pessoa titular = conta.titular;
    cout << "O saldo da conta é (operador): " << conta.recuperaSaldo() << endl;
    cout << "O titular da conta é: " << titular.recuperaNome() << endl;
    return cout;
}

int main(){
    Titular titular(Cpf("123.456.789-10"),"Eduardo", "umasenha");

    ContaPoupanca umaConta("123456", titular);
    umaConta.depositar(500);
    RealizaSaque(umaConta);

    ExibeSaldo(umaConta);

    Titular outro(Cpf("987.654,321-10"),"Alexandre", "outrasenha");
    ContaCorrente umaOutraConta("654321", titular);
    (Conta&) umaOutraConta += 300;

    ContaCorrente outraContaCorrente("546312", titular);

    //umaOutraConta.transferePara(umaConta, 250);
    outraContaCorrente += umaOutraConta;

    cout << umaOutraConta;
    ExibeSaldo(outraContaCorrente);

    //ExibeSaldo(umaOutraConta);
    ExibeSaldo(outraContaCorrente);

    setlocale(LC_ALL, "portuguese");
    std::cout << "Número de contas: " << Conta::recuperaNumeroDeContas() << std::endl;

    Gerente umGerente(
            Cpf("000.000.000-00"),
            "Nome do Gerente",
            1500,
            DiaDaSemana::Terca,
            "123456"
            );

    system("PAUSE");
}
