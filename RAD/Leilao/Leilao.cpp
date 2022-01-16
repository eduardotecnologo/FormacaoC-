#include "Leilao.h"

Leilao::Leilao(std::string descricao): descricao(descricao){

}
const std::vector<Lance>& Leilao::getLances() const {
    return lances;
}

void Leilao::setLance(const Lance& lance){
    lances.push_back(lance);
}