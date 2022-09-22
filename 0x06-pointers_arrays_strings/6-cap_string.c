#include "main.h"

<<<<<<< HEAD


/**

 *cap_string - capitalizes every first letter of a word in a string.

 *separators of words are:  space, tabulation,

 * new line, ,, ;, ., !, ?, ", (, ), {, and }.

 *@s: pointer to string.

 *

 *Return: pointer to s.

=======
/**
 *cap_string - capitalizes every first letter of a word in a string.
 *separators of words are:  space, tabulation,
 * new line, ,, ;, ., !, ?, ", (, ), {, and }.
 *@s: pointer to string.
 *
 *Return: pointer to s.
>>>>>>> e5dc1464bb250e4b7a11a1071eec2ef465a9ba79
 */

char *cap_string(char *s)

{
<<<<<<< HEAD

	int count;



/*  scan through string */



	count = 0;



	while (s[count] != '\0')



	{/* if next character after count is a char , capitalise it */



		if (s[0] >= 97 && s[0] <= 122)

		{

			s[0] = s[0] - 32;

		}



		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'

		    || s[count] == ',' || s[count] == ';' || s[count] == '.'

		    || s[count] == '.' || s[count] == '!' || s[count] == '?'

		    || s[count] == '"' || s[count] == '(' || s[count] == ')'

		    || s[count] == '{' || s[count] == '}')



		{

			if (s[count + 1] >= 97 && s[count + 1] <= 122)

			{

				s[count + 1] = s[count + 1] - 32;

			}

		}

		count++;

	}



=======
	int count;

/*  scan through string */

	count = 0;

	while (s[count] != '\0')

	{/* if next character after count is a char , capitalise it */

		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}

		if (s[count] == ' ' || s[count] == '\t' || s[count] == '\n'
		    || s[count] == ',' || s[count] == ';' || s[count] == '.'
		    || s[count] == '.' || s[count] == '!' || s[count] == '?'
		    || s[count] == '"' || s[count] == '(' || s[count] == ')'
		    || s[count] == '{' || s[count] == '}')

		{
			if (s[count + 1] >= 97 && s[count + 1] <= 122)
			{
				s[count + 1] = s[count + 1] - 32;
			}
		}
		count++;
	}

>>>>>>> e5dc1464bb250e4b7a11a1071eec2ef465a9ba79
	return (s);

}
