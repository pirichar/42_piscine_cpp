#pragma once
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>


class Zombie {

private:
	std::string name;


public:
	void announce (void);
	Zombie();
	Zombie(std::string name);
	Zombie(int N, std::string name);
	~Zombie();
	void setName(std::string name);
	std::string getName(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);


#endif