#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal{
	public:
		Animal();  //constructeur par défaut
		Animal(const std::string& given_type);  //constructeur par type
		Animal(const Animal& old_obj); //constructeur de recopie
		Animal& operator=(const Animal& obj); //Operateur d'affectation
		~Animal(); //destructeur virtuel
		// virtual ~Animal(); //destructeur virtuel
		// virtual void	makeSound() const;
		void	makeSound() const;
		std::string	getType() const;

	protected:
		std::string type;

};

std::ostream& operator<<(std::ostream& s, const Animal& value);
#endif