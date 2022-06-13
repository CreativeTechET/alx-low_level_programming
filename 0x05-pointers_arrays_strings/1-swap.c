
/**
 * swap_int - swaps two references
 * @a: First number
 * @b: secound Number
 */

void swap_int(int *a, int *b)
{
	int tempo = 0;

	tempo = &a;
	*a = &b;
	*b = tempo;
}
