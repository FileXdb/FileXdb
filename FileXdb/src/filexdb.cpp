#include "python/Python.h"

int main()
{

	Py_Initialize();
	PyRun_SimpleString("print('[FileXdb] running ...')");
	Py_Finalize();

	return 0;
}