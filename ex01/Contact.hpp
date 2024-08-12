/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:23:13 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 11:58:18 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include "PhoneBook.hpp"
#include "MyAwesome.hpp"

class Contact {
	
	public:
		// Contact();
		
		void setFirstName(std::string firstname);
		void setLastName(std::string lastname);
		void setNickName(std::string nickname);
		void setPhoneNumber(std::string phonenumber);
		void setDarketSecret(std::string darketsecret);

		std::string getFirstName() const;
		std::string getLastName() const;
		std::string getNickName() const;
		std::string getPhoneNumber() const;
		std::string getDarketSecret() const;
		
	private:
		std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darketsecret;
};

#endif