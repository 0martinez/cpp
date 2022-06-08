/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartine <omartine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/07 18:01:03 by omartine          #+#    #+#             */
/*   Updated: 2022/06/08 20:01:57 by omartine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	i = 1;
	int	j = 0;
	char	letter;

	if (argc < 2)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		while (argv[i])
		{
			while (argv[i][j] != 0)
			{
				if (argv[i][j] >= 'a' && argv[i][j] <= 'z')
				{
					letter = (argv[i][j] - 'a') + 'A';
					std::cout << (char) letter;
				}
				else
					std::cout << (char)argv[i][j];
				j++;
			}
			j = 0;
			i++;
		}
	}
	return (0);
}
