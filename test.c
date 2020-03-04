#include "types.h"
#include "stat.h"
#include "user.h"

int 
test(void)
{
	printf(1,"getnumproc: %d\n", getnumproc());
	ps();
	procinfo();
	setprio(8);
	procinfo();
	exit();
}