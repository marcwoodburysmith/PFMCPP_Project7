#include "DefensiveItem.h"
#include "Utility.h"

/* #include "Dwarf.h"
#include "Paladin.h"
#include "DragonSlayer.h"
#include "Dragon.h"
#include <cassert> */

void DefensiveItem::use(Character* character)
{
    //assert(false); 
    useDefensiveItem(character, *this);
}
