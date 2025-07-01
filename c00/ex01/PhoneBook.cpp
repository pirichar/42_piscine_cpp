#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>


PhoneBook::PhoneBook() {
	// Constructor can initialize any necessary data if needed
	this->_currentIndex = 0; // Initialize current index to 0
};

void PhoneBook::addContact(Contact contact) {
	// Implementation for adding a contact
	// This would typically involve prompting the user for contact details
	if (this->_currentIndex < 8) {
		this->_contacts[this->_currentIndex] = contact;
		this->_currentIndex++;
	} else {
		// If the phone book is full, you might want to overwrite the oldest contact
		for (int i = 0; i < 7; i++) {
			this->_contacts[i] = this->_contacts[i + 1];
		}
		this->_contacts[7] = contact; // Add new contact at the end
	}
}

static std::string format_field(const std::string& field) {
    if (field.length() > 10) {
        return field.substr(0, 9) + ".";
    }
    return field;
}

void PhoneBook::search() {
	std::cout << std::setw(10) << "index" << "|"
			  << std::setw(10) << "first name" << "|"
			  << std::setw(10) << "last name" << "|"
			  << std::setw(10) << "nickname" << std::endl;

	for (int i = 0; i < this->_currentIndex; i++) {
		std::cout << std::setw(10) << i + 1 << "|"
				  << std::setw(10) << format_field(this->_contacts[i].getFirstName()) << "|"
				  << std::setw(10) << format_field(this->_contacts[i].getLastName()) << "|"
				  << std::setw(10) << format_field(this->_contacts[i].getNickname()) << std::endl;
	}

	if (this->_currentIndex == 0) {
		std::cout << "No contacts to display." << std::endl;
		return;
	}

	std::cout << "Enter the index of the contact to display: ";
	int index;
	std::cin >> index;

	if (std::cin.fail() || index < 1 || index > this->_currentIndex) {
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		std::cout << "Invalid index." << std::endl;
		return;
	}

	Contact contact = this->_contacts[index - 1];
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickname() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;
}
void PhoneBook::exit() {
	// Implementation for exiting the phone book application
	// This could involve saving data or simply terminating the program
	std::cout << "Exiting the PhoneBook application. Goodbye!" << std::endl;
	// You might want to save contacts to a file or perform any cleanup here
	// For now, we just print a message
	// and exit the program.
	std::exit(0);
}


int PhoneBook::getCurrentIndex() const { return this->_currentIndex; };
void PhoneBook::setCurrentIndex(int index) { this->_currentIndex = index;}