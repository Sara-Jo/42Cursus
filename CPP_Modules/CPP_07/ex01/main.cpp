/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:42:04 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 19:47:24 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
  char charArr[] = "abcdefg";
  int intArr[] = {1, 2, 3, 4, 5};
  float floatArr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9};

  iter(charArr, 8, print);
  std::cout << std::endl;
  iter(intArr, 5, print);
  std::cout << std::endl;
  iter(floatArr, 9, print);
  std::cout << std::endl;

  iter(charArr, 8, addOne);
  iter(intArr, 5, addOne);
  iter(floatArr, 9, addOne);
  std::cout << std::endl;

  iter(charArr, 8, print);
  std::cout << std::endl;
  iter(intArr, 5, print);
  std::cout << std::endl;
  iter(floatArr, 9, print);
  std::cout << std::endl;

  return 0;
}