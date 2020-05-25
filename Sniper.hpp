#include "Soldier.hpp"

class Sniper : public  Soldier {
public:
Sniper(int nop){
this->damage = 50;
this->nop=nop;
this->hp=100;
}
};