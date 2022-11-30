/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 01:47:23 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 01:56:36 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <cmath>
#include <iostream>
#include <string>

class Conversion
{
private:
    std::string _input;
    double _double;
    bool _isChar() const;

public:
    Conversion();
    Conversion(std::string input);
    Conversion(Conversion const &src);
    ~Conversion();

    Conversion &operator=(Conversion const &obj);

    void putChar();
    void putInt();
    void putFloat();
    void putDouble();
};

#endif