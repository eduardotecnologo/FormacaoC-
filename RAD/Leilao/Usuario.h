#ifndef Usuario_h
#define Usuario_h
#include <string>

class Usuario{
    private:
        std::string nome;
    public:
        Usuario(std::string);
        std::string getNome() const;
};

#endif
