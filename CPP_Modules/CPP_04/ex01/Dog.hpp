/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:16 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 17:50:34 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
 private:
  Brain* brain;

 public:
  Dog();
  Dog(const Dog& obj);
  ~Dog();

  Dog& operator=(const Dog& obj);

  void makeSound() const;
  Brain *getBrain() const;
  std::string getIdea(int i) const;
};

#endif