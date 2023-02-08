/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 21:15:36 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 12:46:45 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef PHONEBOOK_HPP
 # define PHONEBOOK_HPP

# include "Contact.hpp"
# include <iostream>
# include <cstring>
# include <iomanip>

class PhoneBook
{
private:
	Contact contacts[8];
	int		index;
	int		isValidInput(const std::string& input);
	void	print(int index);
	void	printDetail(int index);
	void	printLegends(void);
	void	takeInput(std::string *input, const std::string& msg);
public:
	PhoneBook();
	~PhoneBook();

	void	add(void);
	void	search(void);
};

 #endif
