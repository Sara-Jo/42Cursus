/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:35:50 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 17:49:21 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
    std::string string("HI THIS IS BRAIN");
    std::string* stringPTR = &string;
    std::string& stringREF = string;

    std::cout << "---------------------------" << std::endl;
    std::cout << "Memory address: " << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "string: " << &string << std::endl;
    std::cout << "stringPTR: " << stringPTR << std::endl;
    std::cout << "stringREF: " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "---------------------------" << std::endl;
    std::cout << "Value: " << std::endl;
    std::cout << "---------------------------" << std::endl;
    std::cout << "string: " << string << std::endl;
    std::cout << "stringPTR: " << *stringPTR << std::endl;
    std::cout << "stringREF: " << stringREF << std::endl;

    return (0);
}