#include <test.h>
#include <stdio.h>

t_test						*test_create(char *name, t_test_fn *fn)
{
	t_test	*test;	

	test = (t_test *)malloc(sizeof(t_test));
	test->name = strdup(name);
	test->asserts = lst_init();
	test->fn = fn;
	return (test);
}
