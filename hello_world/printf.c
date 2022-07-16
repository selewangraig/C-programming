/*
 * use the function printf
 */

#include <stdio.h>

int main(void){
	char* c;

	c = "with proper grammar, but the outcome is a piece of art,";

	printf("%s\n", c);

	return 0;
}

/* Another way of outputting this using arrays */
/*
int main(void){
	char a[] = "with proper grammar, but the outcome is a piece of art,";

	printf("%s\n", a);

	return 0;
}
*/
