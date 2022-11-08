#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
private:
  std::string _firstName;
  std::string _lastName;
  std::string _nickName;
  std::string _phoneNumber;
  std::string _darkestSecret;

public:
  Contact();
  ~Contact();

  void setFirstName(std::string firstName);
  void setLastName(std::string lastName);
  void setNickName(std::string nickName);
  void setPhoneNumber(std::string phoneNumber);
  void setDarkestSecret(std::string darkestSecret);

  std::string getFirstName(void) const;
  std::string getLastName(void) const;
  std::string getNickName(void) const;
  std::string getPhoneNumber(void) const;
  std::string getDarkestSecret(void) const;
};

#endif
