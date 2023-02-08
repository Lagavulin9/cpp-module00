/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinholee <jinholee@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 20:36:36 by jinholee          #+#    #+#             */
/*   Updated: 2023/02/06 13:11:49 by jinholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i=1; i<argc; i++)
		{
			j = 0;
			while (argv[i][j])
				std::cout << (char) std::toupper(argv[i][j++]);
		}
	}
	std::cout << std::endl;
	return (0);
}
