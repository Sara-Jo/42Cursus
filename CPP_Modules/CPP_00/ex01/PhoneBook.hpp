/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:44:52 by sjo               #+#    #+#             */
/*   Updated: 2022/11/09 11:44:54 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
private:
  Contact _contacts[8];
  int _contactIndex;
  std::string _readLine() const;
  std::string _resizing(std::string str) const;
  void _printShortInfo() const;
  void _printDetailInfo(Contact contact) const;
  void _addContact();
  void _searchContact() const;

public:
  PhoneBook();
  ~PhoneBook();

  void process();
};

#endif
