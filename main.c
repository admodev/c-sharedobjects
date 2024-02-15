#include <stdio.h>
#include <dlfcn.h>

int main()
{
	void* handle = dlopen("multiplier.so", RTLD_NOW);

	if (!handle)
	{
		return 1;
	}

	void (*multiplier_function)(int, int) = dlsym(handle, "multiply_this");

	if (!multiplier_function)
	{
		dlclose(handle);
		return 1;
	}

	multiplier_function(2, 4);
	printf("\n");
	dlclose(handle);
	return 0;
}
