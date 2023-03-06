#include "fxpch.h"
#include "display.h"


namespace FileXdb
{
	namespace Display
	{
		std::string _logo()
		{
			std::string logo = R"(
   ______ _ _     __   __    _ _     
   |  ___(_) |    \ \ / /   | | |    
   | |_   _| | ___ \ V /  __| | |__  
   |  _| | | |/ _ \/   \ / _` | '_ \ 
   | |   | | |  __/ /^\ \ (_| | |_) |
   \_|   |_|_|\___\/   \/\__,_|_.__/ )";

			return logo;
		}


		void HelpOut()
		{
			std::cout << "\n"
				"usage: filexdb [-h | -- help] \n"
				"               [-v | --version]\n\n"
				"These are common [filexdb] commands used in various situations:\n\n"
				"	Commands            Description\n"
				"	---------           ------------\n"
				"	use                 Start using the database. [use <db-name>]\n"
				"	append              Append two Database. [appent <db-1> <db-2>]\n"
				"	export              Export Database as JSON file\n"
				"	databases           Shows all databases in current directory\n"
				//"	\n"
				"\n";
		}


		void HelpIn()
		{
			std::cout << "\n"

				"These are common commands used in various situations:\n\n"
				"	Commands			Description\n"
				"	---------			------------\n"
				"	.collections         Shows all collections of database\n"
				"	.info                Shows information about the database\n"
				"	.exit                Exit the REPL\n"
				//"	\n"
				"\n";
		}


		void Welcome()
		{
			// Clear Console
			system("cls");

			std::cout << _logo() << "\n";
		}
	}
}