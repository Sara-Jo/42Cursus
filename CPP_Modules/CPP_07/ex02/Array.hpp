/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 22:43:33 by sjo               #+#    #+#             */
/*   Updated: 2022/11/30 23:10:00 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _size;

public:
    Array()
    {
        _arr = new T[0];
        _size = 0;
    }

    Array(unsigned int n)
    {
        _arr = new T[n];
        _size = n;
    }

    Array(const Array &obj)
    {
        _arr = new T[obj._size];
        _size = obj._size;
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = obj._arr[i];
    }

    ~Array() { delete[] _arr; }

    Array &operator=(const Array &obj)
    {
        if (this == &obj)
            return *this;
        delete[] _arr;
        _arr = new T[obj._size];
        _size = obj._size;
        for (unsigned int i = 0; i < _size; i++)
            _arr[i] = obj._arr[i];
        return *this;
    }

    T &operator[](unsigned int i)
    {
        if (i >= _size)
            throw Array::InvalidIndexException();
        return _arr[i];
    }

    const T &operator[](unsigned int i) const
    {
        if (i >= _size)
            throw Array::InvalidIndexException();
        return _arr[i];
    }

    unsigned int size() const { return _size; }

    class InvalidIndexException : public std::exception
    {
    public:
        virtual const char *what() const throw()
        {
            return "Invalid index";
        }
    };
};

#endif