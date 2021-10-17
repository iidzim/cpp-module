/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 15:47:30 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/17 17:07:00 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <limits>

void cast_to_char(std::string s){

	try{
		int str;
		if (s.length() == 1 && isalpha(s[0])){
			std::cout << "char: '" << s[0] << "'" << std::endl;
			return ;
		}
		else
			str = stoi(s);
		if (str < 32 || str > 127){
			std::cout << "char: Non Displayable" << std::endl;
			return ;
		}
		char res = static_cast<char>(str);
		std::cout << "char: " << res << std::endl;
	}
	catch(...){
		std::cout << "char : impossible" << std::endl;
	}
}

void cast_to_int(std::string s){

	try{
		if (s.length() == 1 && isalpha(s[0])){
			char* str = s.c_str();
			std::cout << "int: " << static_cast<int>(str) << std::endl;
		}
		int num = stoi(s);
		int res = static_cast<int>(num);
		std::cout << "int: " << res << std::endl;
	}
	catch(...){
		std::cout << "int : impossible" << std::endl;
	}
}

void cast_to_float(std::string s){

	try{
		float num = stof(s);
		float res = static_cast<float>(num);
		if (num == stoi(s))
			std::cout << "float: " << res << ".0f" << std::endl;
		else
			std::cout << "float: " << res << "f" << std::endl;
	}
	catch(...){
		std::cout << "float: impossible" << std::endl;
	}
}

void cast_to_double(std::string s){

	try{
		double num = stod(s);
		double res = static_cast<double>(num);
		if (num == stoi(s))
			std::cout << "float: " << res << ".0" << std::endl;
		else
			std::cout << "float: " << res << std::endl;
	}
	catch(...){
        std::cout << "double: impossible" << std::endl;
	}
}

int main(int argc, char **argv){

	if (argc == 2){
		std::string s = argv[1];
		cast_to_char(s);
		cast_to_int(s);
		cast_to_float(s);
		cast_to_double(s);
	}
	else
		std::cout << "Invalid argument" << std::endl;
	return (0);
}
