#include "Zombie.hpp"


int main(void)
{
	Zombie* zombie1 = newZombie("Zombie1");
	zombie1->announce();
	delete zombie1;

	randomChump("Zombie2");
	Zombie* zombiehorde = zombieHorde(10, "Paul");
	for(int i = 0; i < 10; i++)
	{
		zombiehorde[i].announce();
	}
	delete [] zombiehorde;

	return 0;
}