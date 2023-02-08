/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 14:24:38 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/08 12:48:35 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>

class Contact
{
private:
	std::string FirstName;
	std::string LastName;
	std::string NickName;
	std::string PhoneNumber;
	std::string DarkestSecret;
public:
	Contact();
	~Contact();
	void				setFirstName(const std::string& data)		{ this->FirstName = data; };
	void				setLastName(const std::string& data)		{ this->LastName = data; };
	void				setNickName(const std::string& data)		{ this->NickName = data; };
	void				setPhoneNumber(const std::string& data)		{ this->PhoneNumber = data; };
	void				setDarkestSecret(const std::string& data)	{ this->DarkestSecret = data; };
	const std::string&	getFirstName(void)							{ return this->FirstName; };
	const std::string&	getLastName(void)							{ return this->LastName; };
	const std::string&	getNickName(void)							{ return this->NickName; };
	const std::string&	getPhoneNumber(void)						{ return this->PhoneNumber; };
	const std::string&	getDarkestSecret(void)						{ return this->DarkestSecret; };
};

#endif
