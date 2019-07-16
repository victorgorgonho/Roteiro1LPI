#ifndef VOO_H
#define VOO_H

#include "data.h"
#include "horario.h"

#define NUM_VAGAS 100
class Voo{
    private:
        int numVoo;
        bool nVagas[NUM_VAGAS];
        Data data1;
        Horario hora1;
    public:
        Voo();
        Voo(int numVoo, bool nVagas[NUM_VAGAS], Data d1, Horario h1);
        int proximoLivre();
        bool verifica(int cadeira);
        bool ocupa(int cadeira);
        int vagas();
        int getNumVoo();
        Data getData();
        Horario getHorario();
};

#endif // VOO_H
