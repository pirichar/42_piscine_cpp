#include "Zombie.hpp"


int main(void)
{
	Zombie* zombie1 = newZombie("Zombie1");
	zombie1->announce();
	delete zombie1;

	randomChump("Zombie2");

	Zombie* horde = zombieHorde(6, "Paul");


	return 0;
}