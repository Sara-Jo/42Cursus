/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:00:36 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 16:14:27 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class AAnimal {
 public:
  AAnimal();
  AAnimal(const AAnimal& obj);
  virtual ~AAnimal();

  AAnimal& operator=(const AAnimal& obj);

  virtual void makeSound() const = 0;
  std::string getType() const;

 protected:
  std::string type;
};

#endif