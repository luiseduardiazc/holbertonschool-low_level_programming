/**
* hash_djb2 - hash_djb2
* Description: This function create a hahs code
* @str: parameter type  string
* Return: hash code
*/
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}


