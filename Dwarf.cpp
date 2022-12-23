#include "Dwarf.h"
#include "Utility.h"


 //name, hit points, armor. 

Dwarf::Dwarf(std::string name_, int hp_, int armor_) :
    Character(hp_, armor_, 4),
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



