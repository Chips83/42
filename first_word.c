#include <unistd.h>

void ft_putchar(char c)
{
  write(1, &c, 1);
}

void ft_putstr(char *str)
{
  int i;
  i = 0;
  
  while (str[i] <= 32 && str[i] != '\0')
  {
    i++;
  }  
  while (str[i] > 32 && str[i])
  {
    ft_putchar(str[i]);
    i++; 
  } 
}

int first_word_main(int argc, char **argv)
{
  if (argc == 1)
  {
    ft_putstr(argv[0]);
  }
  ft_putchar('\n');
  return(0);
}