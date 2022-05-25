#include <iostream>
#include <string>

using namespace std;

struct Conta{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;
    
    void sacar(float valorSacar){
        if(valorSacar < 0 ){
            cout << "Ops! Você não possui saldo suficiente para saque." << endl;
            return;
        }
        if(valorSacar > saldo){
            cout << "Ops! Valor a sacar maior que o saldo disponível." << endl;
            return;
        }
        saldo-= valorSacar;
    }
    
    void depositar(float valorDepositar){
        if(valorDepositar < 5){
            cout << "Ops!Você precisa digitar uma valor superior a R$5,00 para depósito" << endl;
            return;
        }
        saldo += valorDepositar;
    }
};


int main() {
    Conta umaConta;
    umaConta.numero = "1234567";
    umaConta.cpfTitular = "123.456.789-19";
    umaConta.nomeTitular = "Eduardo";
    umaConta.saldo = 100;
    
    Conta umaOutraConta;
    umaOutraConta.saldo = 200;
    
    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);
    
    umaConta.saldo = 1000;
    
    cout << "Uma Conta: " << umaConta.saldo << " e uma outra conta: " << umaOutraConta.saldo << endl;
    return 0;
}
	
