/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 13:35:38 by codespace         #+#    #+#             */
/*   Updated: 2024/05/09 16:26:48 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int main(int argc, char **argv)
{
    if (!argv || argc > 4 || argc < 4)
        return (1);
    std::string filename = argv[1];
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::fstream fs;
    std::fstream fl;
    
    fs.open (filename.c_str(), std::ios::in);
    if (!fs.is_open())
    {
        std::cout << "Unable to open file" << std::endl;
        return 1;
    }
    std::string file_replace = filename;
    file_replace.append(".replace");
    fl.open (file_replace.c_str(), std::fstream::in | std::fstream::out | std::fstream::app);

    std::string line;
    std::string buffer;
    while (getline(fs, line))
    {
        int i = 0;
        while(line[i])
        {
            if (line.substr(i, s1.length()) == s1)
            {
                buffer += s2;
                i += s1.length();
            }
            else
            {
                buffer += line[i];
                i++;
            }
        }
        buffer += "\n";
    }
    fl << buffer;
    fs.close();
    fl.close();
    return (0);
}