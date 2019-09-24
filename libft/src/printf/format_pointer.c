#include "ft_printf.h"
#include "libft.h"

void				format_pointer(void (*outc)(char), const char **fmt, t_args *args, va_list va)
{
	unsigned long	value;
	char			*tmp;

	value = (unsigned long)va_arg(va, unsigned long);
	args->flags |= FNO;
	tmp = ft_imaxtoa_base((unsigned long)value, 16, "0123456789abcdef");
	format_out(outc, tmp, args, **fmt);
	if (tmp)
		free(tmp);
}
