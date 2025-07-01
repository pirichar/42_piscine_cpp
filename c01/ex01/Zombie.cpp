#include "Zombie.hpp"




void Zombie::announce(void){
	std::cout << this->name<< ": BraiiiiiiinnnzzzZ.."<< std::endl;
}

Zombie::Zombie() : name("Default Zombie") {
	
}

Zombie::Zombie(std::string name) : name(name) {
	
}

Zombie::~Zombie() {
	std::cout << this->name << " is destroyed" << std::endl;
}

void Zombie::setName(std::string name){
	this->name = name;
}

std::string Zombie::getName(void) const {
	return this->name;
}