/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:37 by sjo               #+#    #+#             */
/*   Updated: 2022/11/21 18:34:11 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iomanip>
#include <cctype>

PhoneBook::PhoneBook()
{
  contactIndex = 0;
}

PhoneBook::~PhoneBook() {}

std::string PhoneBook::readLine() const
{
  std::string line;
  while (1) {
    std::getline(std::cin, line);
    if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			exit(0);
		}
    if (line.length() == 0)
      std::cout << "Not accepting empty input. Try again." << std::endl;
    else
      return line;
  }
}

std::string PhoneBook::resizing(std::string str) const
{
  if (str.length() > 10)
  {
    str.resize(9);
    str.append(".");
  }
  return str;
}

void PhoneBook::printShortInfo() const
{
  std::cout << "|" << std::setw(10) << "Index" << "|" << std::setw(10) << "First Name" << "|" << std::setw(10) << "Last Name" << "|" << std::setw(10) << "Nickname" << "|" << std::endl;
  for (int i = 0; i < 8; i++)
  {
    std::cout << "|" << std::setw(10) << i << "|";
    std::cout << std::setw(10) << resizing(contacts[i].getFirstName()) << "|";
    std::cout << std::setw(10) << resizing(contacts[i].getLastName()) << "|";
    std::cout << std::setw(10) << resizing(contacts[i].getNickName()) << "|";
    std::cout << std::endl;
  }
}

void PhoneBook::printDetailInfo(Contact contact) const
{
  std::cout << "First name: " << contact.getFirstName() << std::endl;
  std::cout << "Last name: " << contact.getLastName() << std::endl;
  std::cout << "Nick name: " << contact.getNickName() << std::endl;
  std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
  std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

bool is_number(std::string str) {
  for (int i = 0; str[i]; i++)
    if (!isdigit(str[i])) return false;
  return true;
}

void PhoneBook::addContact()
{
	std::string	firstname;
	std::string	lastname;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;
  int index = contactIndex % 8;

  std::cout << "Enter first name: ";
  firstname = readLine();
  std::cout << "Enter last name: ";
  lastname = readLine();
  std::cout << "Enter nickname: ";
  nickname = readLine();
  while (1) {
    std::cout << "Enter phone number: ";
    phone_number = readLine();
    if (is_number(phone_number) == true) break;
    std::cout << phone_number << " is not a number. Try again." << std::endl;
  }
  std::cout << "Enter darkest secret: ";
  darkest_secret = readLine();
  
  contacts[index].setFirstName(firstname);
  contacts[index].setLastName(lastname);
  contacts[index].setNickName(nickname);
  contacts[index].setPhoneNumber(phone_number);
  contacts[index].setDarkestSecret(darkest_secret);
  contactIndex++;
}

void PhoneBook::searchContact() const
{
  std::string input;
  int index;

  printShortInfo();
  while (1)
  {
    std::cout << "Enter index: ";
    input = readLine();
    index = input[0] -= '0';
    if (input[1] || index < 0 || index > 7 || contacts[index].getFirstName().empty())
      std::cout << "Invalid index. Try again." << std::endl;
    else
      break;
  }
  printDetailInfo(contacts[index]);
}

void PhoneBook::process()
{
  while (true)
  {
    std::cout << "Enter your command [ADD, SEARCH, EXIT]: ";
    std::string line;
    std::getline(std::cin, line);

    if (std::cin.eof() == true)
		{
			std::cout << "You Pressed ^D. Exiting phonebook now." << std::endl;
			break;
		}

    if (line == "ADD") 
      addContact();

    else if (line == "SEARCH") 
      searchContact();

    else if (line == "EXIT")
      break;

    else 
      std::cout << "Invalid input. Try again." << std::endl;
  }
}