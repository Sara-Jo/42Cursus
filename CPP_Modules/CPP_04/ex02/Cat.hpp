/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:40:46 by sjo               #+#    #+#             */
/*   Updated: 2022/11/29 15:11:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
 private:
  Brain* brain;
  
 public:
  Cat();
  Cat(const Cat& obj);
  ~Cat();

  Cat& operator=(const Cat& obj);

  void makeSound() const;
  Brain *getBrain() const;
};

#endif