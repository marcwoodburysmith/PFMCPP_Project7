#include "Dwarf.h"
#include "Utility.h"


 //name, hit points, armor. 

Dwarf::Dwarf(std::string name_, int hp_, int armour_) :
    Character(hp_, armour_, 4),
    name(name_)
{
    helpfulItems = makeHelpfulItems(3);
    defensiveItems = makeDefensiveItems(2);
}

//Dwarf::getName

const std::string& Dwarf::getName()
{
    return name;
}

//Dwarf::getStats

std::string Dwarf::getStats()
{
    return getCharacterStats(this);
}



