#ifndef Leilao_h
#define Leilao_h
#include <vector>
#include <string>
#include "Lance.h"

class Leilao{
    private:
        std::vector<Lance> lances;
        std::string descricao;
    public:
        Leilao(std::string descricao);
        const std::vector<Lance>& getLances() const;
        void setLance(const Lance& lance);
};
#endif // !Leilao_h