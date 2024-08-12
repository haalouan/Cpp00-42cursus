/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:41:31 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 10:57:53 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MyAwesome.hpp"

void Contact::setFirstName(std::string firstname){
    this->firstname = firstname;
}

void Contact::setLastName(std::string lastname){
    this->lastname = lastname;
}

void Contact::setNickName(std::string nickname){
    this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phonenumber){
    this->phonenumber = phonenumber;
}

void Contact::setDarketSecret(std::string darketsecret){
    this->darketsecret = darketsecret;
}

std::string Contact::getFirstName() const{
    return this->firstname;
}

std::string Contact::getLastName() const{
    return this->lastname;
}

std::string Contact::getNickName() const{
    return this->nickname;
}

std::string Contact::getPhoneNumber() const{
    return this->phonenumber;
}

std::string Contact::getDarketSecret() const{
    return this->darketsecret;
}