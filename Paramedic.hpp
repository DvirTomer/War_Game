#include "Soldier.hpp"

class Paramedic : public  Soldier {
public:
Paramedic(int nop){
this->damage = 0;
this->nop=nop;
this->hp=100;
}
};