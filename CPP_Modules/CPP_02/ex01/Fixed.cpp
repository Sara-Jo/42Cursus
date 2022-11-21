/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 21:52:18 by sjo               #+#    #+#             */
/*   Updated: 2022/11/21 15:35:57 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &obj)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    rawBits = value << fractionalBits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    rawBits = roundf(value * (1 << fractionalBits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj)
{
    std::cout << "Copy assignment operator called" << std::endl;
    rawBits = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    return rawBits;
}

void Fixed::setRawBits(int const raw)
{
    rawBits = raw;
}

float Fixed::toFloat(void) const
{
    return (float)rawBits / (1 << fractionalBits);
}

int Fixed::toInt(void) const
{
    return rawBits >> fractionalBits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &obj)
{
    out << obj.toFloat();
    return out;
}