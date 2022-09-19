/**
 * swap_int - This function
 * swaps the values of two integers
 *
 * @a: pointer variable to a
 * @b: pointer to variable b
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	*a = *b;
	*b = temp;
}
