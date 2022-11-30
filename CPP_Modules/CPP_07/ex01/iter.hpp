/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 19:41:50 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 19:46:03 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T* array, int len, void (*f)(T&)) {
  for (int i = 0; i < len; i++)
    f(array[i]);
}

template <typename T>
void print(T& x) {
  std::cout << x << " ";
}

template <typename T>
void addOne(T& x) {
  x += 1;
}

#endif