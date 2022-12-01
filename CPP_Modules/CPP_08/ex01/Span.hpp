/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 00:03:23 by sjo               #+#    #+#             */
/*   Updated: 2022/12/01 14:55:16 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <exception>
#include <vector>

class Span
{
private:
    unsigned int _n;
    std::vector<int> _v;

public:
    Span();
    Span(unsigned int N);
    Span(const Span &obj);
    ~Span();
    Span &operator=(const Span &obj);

    void addNumber(int num);
    void addNumber(std::vector<int>::iterator begin,
                   std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();

    class SpanIsFullException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class NotEnoughSpaceException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };

    class SizeTooSmallException : public std::exception
    {
    public:
        virtual const char *what() const throw();
    };
};

#endif