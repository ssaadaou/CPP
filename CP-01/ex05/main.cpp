/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ssaadaou <ssaadaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 02:00:23 by ssaadaou          #+#    #+#             */
/*   Updated: 2023/11/28 21:24:13 by ssaadaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl run;
    run = run;
    
    run.complain("DEBUG");
    run.complain("INFO");
    run.complain("WARNING");
    run.complain("ERROR");
    run.complain("shouldntWork");
}