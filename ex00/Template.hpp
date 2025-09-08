/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Template.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tndreka < tndreka@student.42heilbronn.d    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/05 17:10:36 by tndreka           #+#    #+#             */
/*   Updated: 2025/09/08 17:36:12 by tndreka          ###   ########.fr       */
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
T min(T &a, T &b)
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
T max(T &a, T &b)
{
	T res;
	if (a > b)
		res = a;
	else
		res = b;
	return res;
}

#endif