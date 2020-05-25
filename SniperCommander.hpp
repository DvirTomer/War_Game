#include "Soldier.hpp"

class SniperCommander : public  Soldier {
public:
SniperCommander(int nop){
this->damage = 100;
this->nop=nop;
this->hp=120;
}
};
