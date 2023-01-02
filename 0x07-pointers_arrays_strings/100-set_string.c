/**
 * set_string - Switches what the pointer is pointing at
 * @s: A pointer to a pointer
 * @to: A pointer to a string
 *
 * Return: Nothing
 */

void set_string(char **s, char *to)
{
	*s = to;
}
