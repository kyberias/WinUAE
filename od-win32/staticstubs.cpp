#include <stdio.h>

extern "C"
{
	int *__iob_func;

	void use_fscanf_so_that_linker_links_it()
	{
		fscanf(NULL, NULL);
	}
}
