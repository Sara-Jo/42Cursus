/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 15:08:57 by sjo               #+#    #+#             */
/*   Updated: 2022/11/28 17:52:47 by sjo              ###   ########.fr       */
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
  std::string getIdea(size_t i);
  void setIdea(int i, std::string idea);

 private:
  std::string ideas[100];
};

#endif