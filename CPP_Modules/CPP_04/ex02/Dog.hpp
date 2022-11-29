/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:16 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 15:11:26 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
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