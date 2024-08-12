/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haalouan <haalouan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 09:08:49 by haalouan          #+#    #+#             */
/*   Updated: 2024/08/12 09:18:32 by haalouan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av){
	int i = 1;
	int j = 0;
	
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	}
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			std::cout << (char)toupper(av[i][j]);
			j++;
		}
		i++;
	}

	return 0;
}
