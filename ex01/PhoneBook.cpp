/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:24:28 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 14:45:04 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : MaxContact(8), CurrentIndex(0), ContactCount(0){//initialize   
}

void PhoneBook::AddContact() {
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarketSecret;

    if (this->CurrentIndex == MaxContact)
        this->CurrentIndex = 0;
    system("clear");
    std::cout << "Enter your firstname : ";
    std::getline(std::cin, FirstName);
    system("clear");
    std::cout << "Enter your lastname : ";
    std::getline(std::cin, LastName);
    system("clear");
    std::cout << "Enter your nickname : ";
    std::getline(std::cin, NickName);
    system("clear");
    std::cout << "Enter your phone nmber : ";
    std::getline(std::cin, PhoneNumber);
    system("clear");
    std::cout << "Enter your darkest secret : ";
    std::getline(std::cin, DarketSecret);
    system("clear");

    this->contacts[this->CurrentIndex].setFirstName(FirstName);
    this->contacts[this->CurrentIndex].setLastName(LastName);
    this->contacts[this->CurrentIndex].setNickName(NickName);
    this->contacts[this->CurrentIndex].setPhoneNumber(PhoneNumber);
    this->contacts[this->CurrentIndex].setDarketSecret(DarketSecret);
    this->CurrentIndex++;
    if (ContactCount < 8)
        ContactCount++;
}

void PhoneBook::SearchContact(){

    std::cout << std::setw(10) << std::right << "Index" << " | ";
    std::cout << std::setw(10) << std::right << "First Name" << " | ";
    std::cout << std::setw(10) << std::right << "Last Name" << " | ";
    std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
    std::cout << std::string(54, '-') << std::endl;

    for (int i = 0; i < ContactCount; ++i) {
        std::string firstName = contacts[i].getFirstName();
        std::string lastName = contacts[i].getLastName();
        std::string nickname = contacts[i].getNickName();

        if (firstName.length() > 10) firstName = firstName.substr(0, 9) + ".";
        if (lastName.length() > 10) lastName = lastName.substr(0, 9) + ".";
        if (nickname.length() > 10) nickname = nickname.substr(0, 9) + ".";

        std::cout << std::setw(10) << i << " | ";
        std::cout << std::setw(10) << firstName  << " | ";
        std::cout << std::setw(10) << lastName  << " | ";
        std::cout << std::setw(10) << nickname  << std::endl;
    }
    
    std::cout << "Enter the index of the contact to display : ";
    std::string result;
    std::getline(std::cin, result);
    int index = atoi(result.c_str());
    if (index == 0 && result[0] != '\0'){
        std::cout << "Enter a valid digit\n";
        return ;
    }
    if (index < 0 || index >= 8){
        std::cout << "Out of range\n";
        return ;
    }
    if (index > this->CurrentIndex){
        std::cout << "The contact is empty\n";
        return ;
    }
    std::cout << "Fist Name : " << contacts[index].getFirstName() << std::endl;
    std::cout << "Last Name : " << contacts[index].getLastName() << std::endl;
    std::cout << "Nickname : " << contacts[index].getNickName() << std::endl;
    std::cout << "Phone Number : " << contacts[index].getPhoneNumber() << std::endl;
    std::cout << "Darket Secret : " << contacts[index].getDarketSecret() << std::endl;
    
}