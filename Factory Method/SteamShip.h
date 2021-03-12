#ifndef STEAMSHIP_H
#define STEAMSHIP_H
#include "IVehicle.h"
class SteamShip:IVehicle {
    public:
    SteamShip();
    ~SteamShip();
    std::string getType() override;
};
#endif