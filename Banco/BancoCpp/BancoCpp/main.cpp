#include <iostream>
#include <string>

#include "Conta.hpp"

using namespace std;

int main() {
    Conta umaConta("123","023.548.541-16","Eduardo");
    umaConta.depositar(500);
    umaConta.sacar(200);
    
    cout << "Uma conta: " << umaConta.getSaldo() << endl;
    
    Conta umaOutraConta("321","321.854.541-20","Ale");
    umaOutraConta.depositar(1000);
    umaOutraConta.sacar(500);
    
    cout << "Uma OutraConta: " << umaOutraConta.getSaldo() << endl;
    
    cout << " Número de Contas: " << umaConta.numeroDeContas << endl;
    
    return 0;
}
