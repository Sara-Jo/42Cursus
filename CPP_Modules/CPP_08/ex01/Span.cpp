/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:03:44 by sjo               #+#    #+#             */
/*   Updated: 2022/12/01 14:57:13 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span() : _n(0), _v() {}

Span::Span(unsigned int N) : _n(N), _v() {}

Span::Span(const Span &obj): _n(obj._n), _v(obj._v)
{
}

Span::~Span() {}

Span &Span::operator=(const Span &obj)
{
    if (this == &obj)
        return *this;
    _n = obj._n;
    _v = obj._v;
    return *this;
}

void Span::addNumber(int num)
{
    if (_v.size() >= _n)
        throw Span::SpanIsFullException();
    _v.push_back(num);
}

void Span::addNumber(std::vector<int>::iterator begin,
                     std::vector<int>::iterator end)
{
    if (_v.size() + (end - begin) > _n)
        throw Span::NotEnoughSpaceException();
    for (std::vector<int>::iterator it = begin; it != end; it++)
        _v.push_back(*it);
}

int Span::shortestSpan()
{
    unsigned int ret = UINT_MAX;
    std::vector<int> tmp(_v);

    if (_v.size() <= 1)
        throw Span::SizeTooSmallException();
    std::sort(tmp.begin(), tmp.end());
    for (unsigned int i = 0; i < tmp.size() - 1; i++)
    {
        ret = std::min(ret, (unsigned int)(tmp[i + 1] - tmp[i]));
    }
    return ret;
}

int Span::longestSpan()
{
    if (_v.size() <= 1)
        throw Span::SizeTooSmallException();
    return *std::max_element(_v.begin(), _v.end()) -
           *std::min_element(_v.begin(), _v.end());
}

const char *Span::SpanIsFullException::what() const throw()
{
    return "Can't add another number, span is full";
}

const char *Span::NotEnoughSpaceException::what() const throw()
{
    return "Not enough space to add numbers";
}

const char *Span::SizeTooSmallException::what() const throw()
{
    return "Size of span is less or equal to 1, no span to find";
}