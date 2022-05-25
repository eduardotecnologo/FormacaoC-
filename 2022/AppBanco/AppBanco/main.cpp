#include <iostream>
#include <string>
#include "Conta.hpp"

using namespace std;

int main() {
    Conta umaConta("123456","Eduardo","123.456.789-19");
    umaConta.depositar(500);
    umaConta.sacar(200);
    
    //Conta umaOutraConta("654321","Alexandre","918.765.654-19");
    
    //umaOutraConta.depositar(700);
    //umaOutraConta.sacar(200);
    
    cout << "Uma Conta: " << umaConta.getSaldo() << endl;
    return 0;
}
	
