#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>



int main(void)
{
	PhoneBook phoneBook;

	std::cout << "Welcome to the PhoneBook application!" << std::endl;
	std::cout << "You can add, search, and display contacts." << std::endl;
	std::cout << "Type 'ADD' to add a contact\n'SEARCH' to search for a contact\n'EXIT' to exit the application." << std::endl;

	while(1)
	{
		//get the user command
		std::string command;
		std::cout << "Enter command: ";
		std::getline(std::cin, command);
		//look for a valid command
		if (command == "ADD")
		{
			std::cout << "Adding a new contact..." << std::endl;
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;
			//Prompt the user for contact details
			std::cout << "Enter first name: ";
			std::getline(std::cin, firstName);
			std::cout << "Enter last name: ";
			std::getline(std::cin, lastName);
			std::cout << "Enter nickname: ";
			std::getline(std::cin, nickname);
			std::cout << "Enter phone number: ";
			std::getline(std::cin, phoneNumber);
			std::cout << "Enter Dark Secret: ";
			std::getline(std::cin, darkestSecret);
			//Create a new contact object
			Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
			//Add the contact to the phonebook
			phoneBook.addContact(newContact);
			std::cout << "Contact added successfully!" << std::endl;
			continue;
		}
		else if(command == "SEARCH")
		{
			std::cout << "Searching for contacts..." << std::endl;
			//Call the phonebook search function
			phoneBook.search();
			continue;
		}
		else if(command == "EXIT")
		{
			std::cout << "Exiting the application. Goodbye!" << std::endl;
			break; // Exit the loop and terminate the program
		}
		// else
		// {
		// 	std::cout << "Invalid command. Please try again." << std::endl;
		// 	continue; // Skip to the next iteration of the loop
		// }
		//if add is asked demand for contact details and store it into a Contact or maybe create it directly within the phonebook?
		//Call the phonebook add Contact with 
	}


	return 0;
}