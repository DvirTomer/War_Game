#include "Soldier.hpp"

class FootSoldier : public  Soldier {
public:
FootSoldier(int nop){
this->nop=nop;
this->damage = 10;
this->hp=100;
}
};