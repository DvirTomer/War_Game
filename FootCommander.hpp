#include "Soldier.hpp"

class FootCommander : public  Soldier {
public:
FootCommander(int nop){
this->nop=nop;
this->damage = 20;
this->hp=150;
}
};