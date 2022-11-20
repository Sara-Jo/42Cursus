/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:50:16 by sjo               #+#    #+#             */
/*   Updated: 2022/11/20 21:51:59 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <cmath>
#include <iostream>

class Fixed
{
private:
    int rawBits;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &obj);
    Fixed(const int value);
    Fixed(const float value);
    ~Fixed();

    Fixed &operator=(const Fixed &obj);

    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat(void) const;
    int toInt(void) const;
};

std::ostream &operator<<(std::ostream &out, const Fixed &obj);

#endif