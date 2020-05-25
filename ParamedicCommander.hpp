#include "Soldier.hpp"

class ParamedicCommander : public  Soldier {
public:
ParamedicCommander(int nop){
this->damage = 0;
this->nop = nop;
this->hp = 200;
}
};