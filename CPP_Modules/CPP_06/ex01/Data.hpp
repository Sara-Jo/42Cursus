/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:15:15 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 15:15:31 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string>

class Data {
 private:
  std::string _name;

 public:
  Data();
  Data(const Data& obj);
  Data& operator=(const Data& obj);
  ~Data();
};

#endif