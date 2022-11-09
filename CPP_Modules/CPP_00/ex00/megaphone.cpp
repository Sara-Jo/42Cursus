/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 10:52:01 by sjo               #+#    #+#             */
/*   Updated: 2022/11/09 10:52:04 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int argc, char **argv)
{
  if (argc < 2)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return 0;
  }
  for (int i = 1; i < argc; i++)
  {
    for (int j = 0; argv[i][j]; j++)
    {
      argv[i][j] = toupper(argv[i][j]);
    }
    std::cout << argv[i];
  }
  std::cout << std::endl;
  return 0;
}