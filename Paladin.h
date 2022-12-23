#pragma once

#include "Character.h"

struct Paladin : Character
{
    Paladin(std::string name_, int hp_, int armour_);

    const std::string& getName() override;
    std::string getStats() override;
    

private:
    const std::string name;
};