/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 11:44:52 by sjo               #+#    #+#             */
/*   Updated: 2022/11/15 15:27:00 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
  private:
    Contact contacts[8];
    int contactIndex;
    std::string readLine() const;
    std::string resizing(std::string str) const;
    void printShortInfo() const;
    void printDetailInfo(Contact contact) const;
    void addContact();
    void searchContact() const;

  public:
    PhoneBook();
    ~PhoneBook();

    void process();
};

#endif
