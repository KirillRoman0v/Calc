/* elem.h */

enum ELEM_TYPE
{
	CHARITY,
	NUMBER
};

typedef struct elem  
{
	int numb;
	char charity;
	enum ELEM_TYPE type;
} elem;

elem elem_init();

int is_numb(elem a);
int is_char(elem a);

/* Function with defended equating and comparison is needed*/