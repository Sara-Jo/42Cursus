/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:22:19 by sjo               #+#    #+#             */
/*   Updated: 2022/11/20 15:25:58 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int rawBits;
    static const int fractionalBits = 8;

public:
    Fixed();
    Fixed(const Fixed &obj);
    ~Fixed();
    Fixed &operator=(const Fixed &obj);

    int getRawBits(void) const;
    void setRawBits(int const raw);
};

#endif