#ifndef FT_PRINT_F
# define FT_PRINT_F
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_puthex(unsigned int n);
int	ft_printf(const char *format, ... );

#endif