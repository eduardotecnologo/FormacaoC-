#ifndef Lance_h
#define Lance_h
#include "Usuario.h"

class Lance{
    private:
        Usuario usuario;
        float valor;
    public:
        Lance(Usuario usuario, float valor);
        float getValor() const;
};

#endif // !Lance_h