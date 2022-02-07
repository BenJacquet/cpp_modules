/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabenjam <jabenjam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:15:12 by jabenjam          #+#    #+#             */
/*   Updated: 2022/02/07 11:33:23 by jabenjam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string _target;
public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm & src);
	ShrubberyCreationForm(std::string target);
	~ShrubberyCreationForm();
	ShrubberyCreationForm & operator=(ShrubberyCreationForm & src);
	void executeForm() const;
	void makeShrubbery() const;
	std::string getTarget() const;
};

#define TREES \
"                                              .                                                      .\n\
                                   .         ;                                             .         ;\n\
      .              .              ;%     ;;                 .              .              ;%     ;;\n\
        ,           ,                :;%  %;                    ,           ,                :;%  %;\n\
         :         ;                   :;%;'     .,              :         ;                   :;%;'     .,\n\
,.        %;     %;            ;        %;'    ,;       ,.        %;     %;            ;        %;'    ,;\n\
  ;       ;%;  %%;        ,     %;    ;%;    ,%'          ;       ;%;  %%;        ,     %;    ;%;    ,%'\n\
   %;       %;%;      ,  ;       %;  ;%;   ,%;'            %;       %;%;      ,  ;       %;  ;%;   ,%;'\n\
    ;%;      %;        ;%;        % ;%;  ,%;'               ;%;      %;        ;%;        % ;%;  ,%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'                  `%;.     ;%;     %;'         `;%%;.%;'\n\
     `%;.     ;%;     %;'         `;%%;.%;'                  `%;.     ;%;     %;'         `;%%;.%;'\n\
         `:%;.  :;bd%;          %;@%;'                           `:%;.  :;bd%;          %;@%;'\n\
           `@%:.  :;%.         ;@@%;'                              `@%:.  :;%.         ;@@%;'\n\
             `@%.  `;@%.      ;@@%;                                  `@%.  `;@%.      ;@@%;\n\
             `@%.  `;@%.      ;@@%;                                  `@%.  `;@%.      ;@@%;\n\
                 ;@%. :@%%  %@@%;                                        ;@%. :@%%  %@@%;\n\
                   %@bd%%%bd%%:;                                           %@bd%%%bd%%:;\n\
                     #@%%%%%:;;                                              #@%%%%%:;;\n\
                     %@@%%%::;                                               %@@%%%::;\n\
                     %@@@%(o);  . '                                          %@@@%(o);  . '\n\
                     %@@@o%;:(.,'                                            %@@@o%;:(.,'\n\
                 `.. %@@@o%::;                                           `.. %@@@o%::;\n\
                    `)@@@o%::;                                              `)@@@o%::;\n\
                     %@@(o)::;                                               %@@(o)::;\n\
                    .%@@@@%::;                                              .%@@@@%::;\n\
                    ;%@@@@%::;.                                             ;%@@@@%::;.\n\
                   ;%@@@@%%:;;;.                                           ;%@@@@%%:;;;.\n\
               ...;%@@@@@%%:;;;;,..                                    ...;%@@@@@%%:;;;;,..\n"
