/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bapasqui <bapasqui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/06 19:26:57 by bapasqui          #+#    #+#             */
/*   Updated: 2024/05/06 19:36:17 by bapasqui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int argc, char **argv)
{
    int i = 1;
    int j = 0;
	if (argc > 1)
	{
		while (i < argc)
        {
			while (argv[i][j])
            {
				std::cout << (char)std::toupper(argv[i][j]);
                j++;
            }
            j = 0;
            i++;
        }
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (0);
}