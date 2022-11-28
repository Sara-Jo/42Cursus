/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:09:40 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 17:58:04 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  
 	Animal	*a[4];

	for(int i = 0; i < 4; i++) {
		if (i < 2) 
			a[i] = new Cat();
		else 
			a[i] = new Dog();
	}

	std::cout << std::endl;

	for(int i = 0; i < 4; i++) 
		a[i]->makeSound();
	
	std::cout << std::endl;

	for(int i = 0; i < 4; i++) 
		delete a[i];

	std::cout << std::endl;

    std::string str;

    Dog *d1 = new Dog();
	Dog *d2 = new Dog();
	std::cout << std::endl;

	d1->getBrain()->setIdea(0, "sjo");
	std::cout << "Dog1's first idea is "<< d1->getBrain()->getIdea(0) << std::endl;

	d2->getBrain()->setIdea(0, "go go go!!");
	std::cout << "Dog2's first idea is "<< d2->getBrain()->getIdea(0) << std::endl;
	std::cout << std::endl;
    
	delete d1;
	delete d2;

	return 0;
}