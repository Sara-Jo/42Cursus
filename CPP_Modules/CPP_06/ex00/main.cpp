/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:47:56 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 11:56:25 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Usage: ./convert [value]" << std::endl;
        return 1;
    }

    std::cout.precision(1);
    std::cout << std::fixed;

    Conversion conversion(argv[1]);
    conversion.putChar();
    conversion.putInt();
    conversion.putFloat();
    conversion.putDouble();
}