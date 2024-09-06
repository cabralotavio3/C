#include <iostream>

class pilhas
{
    public:
        int N;
        pilhas *elo;
        pilhas* InserirPilha(pilhas*, int);
        pilhas* RemoverPilha(pilhas*);
        int SomarPilha(pilhas*);

};
