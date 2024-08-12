/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:23:40 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 11:53:03 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "MyAwesome.hpp"
#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook();
		
		void AddContact();
		void SearchContact();
		
	private:
		const int MaxContact;
		int CurrentIndex;
		int ContactCount;
		Contact contacts[8];
};

#endif