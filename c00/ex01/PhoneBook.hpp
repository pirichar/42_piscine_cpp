#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact _contacts[8]; // Assuming a maximum of 8 contacts
		int _currentIndex; // To keep track of the current index for adding contacts

	public:
		PhoneBook();
		~PhoneBook() {};
		void addContact(Contact contact);
		void search();
		void exit();

		//getters and setters
		int getCurrentIndex() const;
		void setCurrentIndex(int index);



};


#endif