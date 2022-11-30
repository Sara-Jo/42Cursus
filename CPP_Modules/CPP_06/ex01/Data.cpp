/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:15:56 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 15:16:46 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("default") {}

Data::Data(const Data& obj) {
  *this = obj;
}

Data& Data::operator=(const Data& obj) {
  if (this == &obj)
    return (*this);
  this->_name = obj._name;
  return (*this);
}

Data::~Data() {}