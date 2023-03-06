#include "fxpch.h"
#include "shell.h"
#include "display.h"

namespace FileXdb
{
	void _showPrompt(std::string location)
	{
		std::cout << location << "> ";
	}


	void RunShell(std::string db_name)
	{
		std::string dbName = db_name;

		Display::Welcome();
		while (true)
		{
			std::string input;
			_showPrompt(dbName);

			std::getline(std::cin, input);

			std::cout << input << std::endl;

			if (input == ".exit" || input == "-q")
			{
				break;
			}
			else
			{

			}
		}
	}

}