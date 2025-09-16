/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:43:57 by tndreka           #+#    #+#             */
/*   Updated: 2025/09/08 18:44:22 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T, typename Func>

/*
    iter(array, lenth[array], function)
    => Iter function takes three parameter
    1) Address of array
    2) Size of array
    3) Function applied to every element on array
*/

/*
    <typename Func> => this is a template parameter called func
    it can be any datatype.
    when the iter() is getting called the third parameter Func
    is automatically known by the compiler.
    you can pass a function to this and the third parameter Func can be a function 
    or a lambda or a functor etc. so the compile figures out the actual type when the function 
    will be called 
*/
void    iter(T *array, size_t len, Func func)
{
    for (size_t i = 0; i < len; i++)
    {
    }
    
}

#endif