#include <stdio.h>
#include "roast/memory.hpp"

using namespace roast;
int main()
{
	null_type n();

	printf("%d\n", null::value);
	return 0;
}