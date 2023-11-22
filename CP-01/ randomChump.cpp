/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    randomChump.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 22:25:05 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/22 21:03:12 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include "Zombie.hpp"


void randomChump( std::string name)
{
   Zombie tmpZ(name);
   tmpZ.announce();
}