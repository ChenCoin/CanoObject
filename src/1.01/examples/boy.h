#ifndef h_boy
#define h_boy

#include "man.h"

/* declear boy */
#define Boy_Data				\
	extends(Man_Data)			\
	char* suject;				\
	int (*study)();
DeclearClass(Boy)


#endif
