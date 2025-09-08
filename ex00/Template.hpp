/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 17:10:36 by tndreka           #+#    #+#             */
/*   Updated: 2025/09/08 18:36:02 by tndreka          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEMPLATES_HPP
#define TEMPLATES_HPP

#include <iostream>


/*
	=========== TEMPLATES =============

*/

//Swap template
template<typename T>
void swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}
//min template
template<typename T>
T min(const T &a, const T &b)
{
	T res;
	if (a < b)
		res = a;
	else
		res = b;
	return res;
}
//Max
template<typename T>
T max(const T &a, const T &b)
{
	T res;
	if (a > b)
		res = a;
	else
		res = b;
	return res;
}

#endif