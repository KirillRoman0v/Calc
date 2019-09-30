/* elem.c */

#include "elem.h"

struct elem elem_init()
{
	struct elem a = { 0, ' ', CHARITY };
	return a;
}

int is_numb (elem a)
{
	if (a.type == CHARITY)
	{
 		return 0;
	} else 
	{
		return 1;
	}
}

int is_char (elem a)
{
	if (is_numb(a))
	{
		return 0;
	} else
	{
		return 1;
	}
}