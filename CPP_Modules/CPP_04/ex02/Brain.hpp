/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:08:57 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 15:11:03 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
 public:
  Brain();
  Brain(const Brain& obj);
  ~Brain();

  Brain& operator=(const Brain& obj);

 private:
  std::string _ideas[100];
};

#endif