#ifndef TREM_H
#define TREM_H

#include <QThread>
#include "semaphore.h"

class Trem: public QThread{
 Q_OBJECT

//Constructor e funções
public:
    Trem(int,int,int);
    void run();
    void setSpeed(int);


//Constructor dos sinais
signals:
    void updateGUI(int,int,int);

//Posições do trem além de id e velocidade
private:
   int x;
   int y;
   int ID;
   int velocidade;
};

#endif // TREM_H
