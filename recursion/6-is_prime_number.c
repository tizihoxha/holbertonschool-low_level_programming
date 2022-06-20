/**
 * find_prime_number - Entry point
 * @n: int
 * @i: int
 * Return: 1 , 0
 */
int find_prime_number(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + find_prime_number(n, i + 1));
}
/**
 * find_prime_number - Entry point
 * @n: int
 * Return: 1, 0
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (find_prime_number(n, 2));
}
