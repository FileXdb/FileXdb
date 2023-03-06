#include "fxpch.h"
#include "display.h"
#include "shell.h"


int main(int argc, const char * argv[])
{

	if (argc == 1 || std::string(argv[1]) == "--help" || std::string(argv[1]) == "-h")
	{
		FileXdb::Display::HelpOut();
		
	}
	else if (std::string(argv[1]) == "use")
	{
		FileXdb::RunShell(std::string(argv[2]));
	}



	return 0;
}