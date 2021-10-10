/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iidzim <iidzim@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/10 18:47:37 by iidzim            #+#    #+#             */
/*   Updated: 2021/10/10 18:51:57 by iidzim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

class Intern{
	public:
		Intern(void);
		~Intern(void);
		Intern(const Intern& intern);
		Intern& operator=(Intern const &intern);
		Form* makeForm(std::string form_name, std::string target);
};

#endif