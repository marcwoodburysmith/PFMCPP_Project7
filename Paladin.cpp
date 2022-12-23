#include "Paladin.h"
#include "Utility.h"

// Paladin::Paladin
Paladin::Paladin(std::string name_, int hp_, int armour_) :
    Character(hp_, armour_, 10),
    name(name_)
{
    helpfulItems = makeHelpfulItems(4);
    defensiveItems = makeDefensiveItems(4);
}

// Paladin::getName

const std::string& Paladin::getName()
{
    return name;
}

// Paladin::getStats

std::string Paladin::getStats()
{
    return getCharacterStats(this);
}


