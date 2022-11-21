/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 15:55:14 by sjo               #+#    #+#             */
/*   Updated: 2022/11/21 15:55:52 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : rawBits(0) {}

Fixed::Fixed(const Fixed& obj) {
  *this = obj;
}

Fixed::Fixed(const int value) {
  rawBits = value << fractionalBits;
}

Fixed::Fixed(const float value) {
  rawBits = roundf(value * (1 << fractionalBits));
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& obj) {
  rawBits = obj.getRawBits();
  return *this;
}

int Fixed::getRawBits(void) const {
  return rawBits;
}

void Fixed::setRawBits(int const raw) {
  rawBits = raw;
}

float Fixed::toFloat(void) const {
  return (float)rawBits / (1 << fractionalBits);
}

int Fixed::toInt(void) const {
  return rawBits >> fractionalBits;
}

bool Fixed::operator>(const Fixed& obj) const {
  return rawBits > obj.getRawBits();
}

bool Fixed::operator<(const Fixed& obj) const {
  return rawBits < obj.getRawBits();
}

bool Fixed::operator>=(const Fixed& obj) const {
  return rawBits >= obj.getRawBits();
}

bool Fixed::operator<=(const Fixed& obj) const {
  return rawBits <= obj.getRawBits();
}

bool Fixed::operator==(const Fixed& obj) const {
  return rawBits == obj.getRawBits();
}

bool Fixed::operator!=(const Fixed& obj) const {
  return rawBits != obj.getRawBits();
}

Fixed Fixed::operator+(const Fixed& obj) const {
  return Fixed((toFloat() + obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& obj) const {
  return Fixed((toFloat() - obj.toFloat()));
}

Fixed Fixed::operator*(const Fixed& obj) const {
  return Fixed((toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj) const {
  return Fixed((toFloat() / obj.toFloat()));
}

Fixed& Fixed::operator++() {
  rawBits++;
  return *this;
}

Fixed Fixed::operator++(int) {
  Fixed tmp(*this);
  operator++();
  return tmp;
}

Fixed& Fixed::operator--() {
  rawBits--;
  return *this;
}

Fixed Fixed::operator--(int) {
  Fixed tmp(*this);
  operator--();
  return tmp;
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  return a < b ? a : b;
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
  return a < b ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  return a > b ? a : b;
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
  return a > b ? a : b;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
  out << obj.toFloat();
  return out;
}