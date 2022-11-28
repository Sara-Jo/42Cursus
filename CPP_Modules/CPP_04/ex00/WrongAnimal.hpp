/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:41:40 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 13:55:05 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
 public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal& obj);
  virtual ~WrongAnimal();

  WrongAnimal& operator=(const WrongAnimal& obj);

  void makeSound() const;
  std::string getType() const;

 protected:
  std::string _type;
};

#endif