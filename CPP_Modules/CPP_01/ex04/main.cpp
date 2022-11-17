/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 19:02:41 by sjo               #+#    #+#             */
/*   Updated: 2022/11/17 19:34:07 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <fstream>

void ft_replace(std::string *line, std::string to_replace, std::string replace_with)
{
    size_t start_pos;

    while ((start_pos = (*line).find(to_replace)) != std::string::npos)
    {
        (*line).erase(start_pos, to_replace.length());
        (*line).insert(start_pos, replace_with);
    }
}

int main(int argc, char **argv) 
{
    if (argc != 4 || !argv[2][0] || !argv[3][0])
    {
        std::cout << "Argument error" << std::endl;
        return (-1);
    }
    std::ifstream ifs(argv[1]);
    if (!ifs.is_open())
    {
        std::cout << "Cannot open the input file" << std::endl;
        return (-1);
    }
    std::string file_name = (std::string)argv[1] + ".replace";
    
    std::ofstream ofs(file_name);
    if (!ofs.is_open())
    {
        std::cout << "Cannot open the output file" << std::endl;
        return (-1);
    }

    std::string line_read;
    std::string to_replace = argv[2];
    std::string replace_with = argv[3];
    while (getline(ifs, line_read))
    {
        ft_replace(&line_read, to_replace, replace_with);
        if (!std::cin.eof())
            ofs << line_read << std::endl;
    }
    ofs.close();
    ifs.close();

    return (0);
}