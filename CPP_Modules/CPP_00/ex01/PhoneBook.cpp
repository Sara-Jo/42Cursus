/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:59:37 by sjo               #+#    #+#             */
/*   Updated: 2022/11/09 10:59:39 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <stdlib.h>
#include <iomanip>
#include "Contact.hpp"

PhoneBook::PhoneBook()
{
  _contactIndex = 0;
}

PhoneBook::~PhoneBook() {}

std::string PhoneBook::_readLine() const
{
  std::string line;
  std::getline(std::cin, line);
  if (std::cin.fail())
  {
    exit(1);
  }
  if (line.length() == 0)
  {
    throw std::exception();
  }
  if (line.find_first_not_of("abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789") != std::string::npos)
  {
    throw std::exception();
  }
  return line;
}

std::string PhoneBook::_resizing(std::string str) const
{
  if (str.length() > 10)
  {
    str.resize(9);
    str.append(".");
  }
  return str;
}

void PhoneBook::_printShortInfo() const
{
  for (int i = 0; i < 8; i++)
  {
    std::cout << "|" << std::setw(10) << i << "|";
    std::cout << std::setw(10) << _resizing(_contacts[i].getFirstName()) << "|";
    std::cout << std::setw(10) << _resizing(_contacts[i].getLastName()) << "|";
    std::cout << std::setw(10) << _resizing(_contacts[i].getNickName()) << "|";
    std::cout << std::setw(10) << _resizing(_contacts[i].getPhoneNumber()) << "|";
    std::cout << std::endl;
  }
}

void PhoneBook::_printDetailInfo(Contact contact) const
{
  std::cout << "First name: " << contact.getFirstName() << std::endl;
  std::cout << "Last name: " << contact.getLastName() << std::endl;
  std::cout << "Nick name: " << contact.getNickName() << std::endl;
  std::cout << "Phone number: " << contact.getPhoneNumber() << std::endl;
  std::cout << "Darkest secret: " << contact.getDarkestSecret() << std::endl;
}

void PhoneBook::_addContact()
{
  std::string input;
  int index = _contactIndex % 8;

  std::cout << "Enter first name: ";
  input = _readLine();
  _contacts[index].setFirstName(input);
  std::cout << "Enter last name: ";
  input = _readLine();
  _contacts[index].setLastName(input);
  std::cout << "Enter nickname: ";
  input = _readLine();
  _contacts[index].setNickName(input);
  std::cout << "Enter phone number: ";
  input = _readLine();
  _contacts[index].setPhoneNumber(input);
  std::cout << "Enter darkest secret: ";
  input = _readLine();
  _contacts[index].setDarkestSecret(input);
  _contactIndex++;
}

void PhoneBook::_searchContact() const
{
  try
  {
    std::string input;
    int index;

    _printShortInfo();
    std::cout << "Enter index: ";
    input = _readLine();
    if (input.length() != 1)
    {
      throw std::exception();
    }
    index = input[0] -= '0';
    if (index < 0 || index > 7)
    {
      throw std::exception();
    }
    _printDetailInfo(_contacts[index]);
  }
  catch (std::exception &e)
  {
    std::cout << "Invalid index" << std::endl;
  }
}

void PhoneBook::process()
{
  try
  {
    std::string command;
    while (true)
    {
      std::cout << "Commands: ADD, SEARCH or EXIT" << std::endl;
      std::cout << "Enter command: ";
      command = _readLine();
      if (command == "EXIT")
      {
        break;
      }
      else if (command == "ADD")
      {
        _addContact();
      }
      else if (command == "SEARCH")
      {
        _searchContact();
      }
      else
      {
        std::cout << "Unknown command" << std::endl;
      }
    }
  }
  catch (std::exception &e)
  {
    std::cout << "Invalid input" << std::endl;
    process();
  }
}
