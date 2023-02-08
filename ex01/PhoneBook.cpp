/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:24:11 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 12:46:34 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook():
	index(0)
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::add(void)
{
	std::string	input;

	takeInput(&input, "First Name: ");
	this->contacts[index].setFirstName(input);
	takeInput(&input, "Last Name: ");
	this->contacts[index].setLastName(input);
	takeInput(&input, "Nick Name: ");
	this->contacts[index].setNickName(input);
	takeInput(&input, "Phone Number: ");
	this->contacts[index].setPhoneNumber(input);
	takeInput(&input, "DarkestSecret: ");
	this->contacts[index].setDarkestSecret(input);
	this->index = (this->index + 1) % 8;
}

void	PhoneBook::search(void)
{
	std::string	input;

	printLegends();
	for (int i=0; i<8; i++)
		print(i);
	takeInput(&input, "Enter Index: ");
	if (isValidInput(input))
		printDetail(atoi(input.data()));
	else
		std::cout << "invalid index input" << std::endl;
}

void	PhoneBook::takeInput(std::string *input, const std::string& msg)
{
	while (1)
	{
		std::cout<< msg;
		std::getline(std::cin, *input);
		if (std::cin.eof())
			exit(1);
		else if (*input == "")
			std::cout << "Error: This field canoot be an empty field" << std::endl;
		else
			break;
	}
}

int	PhoneBook::isValidInput(const std::string& input)
{
	for (size_t i=0; i<strlen(input.data()); i++)
	{
		if (std::isdigit(input.data()[i]) == 0)
			return (0);
	}
	return (1);
}

void	PhoneBook::printLegends(void)
{
	std::cout.width(10);
	std::cout << "Index";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "First Name";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "Last Name";
	std::cout << "|";
	std::cout.width(10);
	std::cout << "Nick Name";
	std::cout << std::endl;
}

void	PhoneBook::print(int index)
{
	std::cout << std::setw(10) << index;
	std::cout << "|";
	if (this->contacts[index].getFirstName().length() >= 10)
		std::cout << std::setw(9) << this->contacts[index].getFirstName().substr(0,9) << '.';
	else
		std::cout << std::setw(10) << this->contacts[index].getFirstName();
	std::cout << "|";
	if (this->contacts[index].getLastName().length() >= 10)
		std::cout << std::setw(9) << this->contacts[index].getLastName().substr(0,9) << '.';
	else
		std::cout << std::setw(10) << this->contacts[index].getLastName();
	std::cout << "|";
	if (this->contacts[index].getNickName().length() >= 10)
		std::cout << std::setw(9) << this->contacts[index].getNickName().substr(0,9) << '.';
	else
		std::cout << std::setw(10) << this->contacts[index].getNickName();
	std::cout << std::endl;
}

void	PhoneBook::printDetail(int index)
{
	std::cout << "First Name: " << this->contacts[index].getFirstName() << std::endl;
	std::cout << "Last Name: " << this->contacts[index].getLastName() << std::endl;
	std::cout << "Nick Name: " << this->contacts[index].getNickName() << std::endl;
	std::cout << "Phone Number: " << this->contacts[index].getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << this->contacts[index].getDarkestSecret() << std::endl;
}

