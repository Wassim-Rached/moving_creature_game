#include "Creature.h"

std::ostream& operator<<(std::ostream& out, const Creature& creature)
{
	out << creature.m_name << " is at " << creature.m_location;
	return out;
}