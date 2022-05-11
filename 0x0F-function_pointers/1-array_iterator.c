/**
 * array_iterator - Execute a function
 *
 * Description: Execute a function given as a parameter on each element of an array
 * @array: integer elements
 * @size: size of the array
 * @action: functin pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
