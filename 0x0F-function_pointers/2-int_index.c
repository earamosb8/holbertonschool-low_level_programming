int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	for(a = 0; a < size; a++)
	{
		if(array[a] == *cmp)
		{
			return(a);
		}
	}
}


