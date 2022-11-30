/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:16:08 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 15:16:45 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

uintptr_t serialize(Data* ptr) {
  return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw) {
  return (reinterpret_cast<Data*>(raw));
}

int main() {
  Data data;

  uintptr_t raw = serialize(&data);
  std::cout << (uintptr_t)&data << std::endl;
  std::cout << raw << std::endl;
  Data* ptr = deserialize(raw);
  std::cout << ((ptr == &data) ? "true" : "false") << std::endl;
}