/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/23 10:10:31 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 16:02:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int	fct_strcmp(void)
{
	printf("%d\n", ft_strcmp("hello", "hello"));
	printf("%d\n", strcmp("hello", "hello"));
	printf("%d\n", ft_strcmp("hello", "helloa"));
	printf("%d\n", strcmp("hello", "helloa"));
	printf("%d\n", ft_strcmp("helloa", "hello"));
	printf("%d\n", strcmp("helloa", "hello"));
	printf("%d\n", ft_strcmp("hello", "hi"));
	printf("%d\n", strcmp("hello", "hi"));
	printf("%d\n", ft_strcmp("", "hello"));
	printf("%d\n", strcmp("", "hello"));
	printf("%d\n", ft_strcmp("hello", ""));
	printf("%d\n", strcmp("hello", ""));
	printf("%d\n", ft_strcmp("salut tiens toi bien ca va etre long", "ok"));
	printf("%d\n", strcmp("salut tiens toi bien ca va etre long", "ok"));
	return (0);
}

int	fct_strcpy(void)
{
	char *dest;

	if (!(dest = malloc(sizeof(char) * 900)))
		return (0);
	printf("%s\n", ft_strcpy(dest, "hello"));
	printf("%s\n", strcpy(dest, "hello"));
	printf("%s\n", ft_strcpy(dest, "helloa"));
	printf("%s\n", strcpy(dest, "helloa"));
	printf("%s\n", ft_strcpy(dest, "hi"));
	printf("%s\n", strcpy(dest, "hi"));
	printf("%s\n", ft_strcpy(dest, ""));
	printf("%s\n", strcpy(dest, ""));
	printf("%s\n", ft_strcpy(dest, "salut tiens toi bien ca va etre long"));
	printf("%s\n", strcpy(dest, "salut tiens toi bien ca va etre long"));
	free(dest);
	return (0);
}

int	fct_strlen(void)
{
	printf("%ld\n", ft_strlen("hello"));
	printf("%ld\n", strlen("hello"));
	printf("%ld\n", ft_strlen("Calcule moi la longueur de cette\
	interminable chaine"));
	printf("%ld\n", strlen("Calcule moi la longueur de cette\
	interminable chaine"));
	printf("%ld\n", ft_strlen(""));
	printf("%ld\n", strlen(""));
	return (0);
}

int	main(void)
{
	fct_read();
	fct_read_2();
	fct_write();
	fct_write_2();
	fct_strdup();
	fct_strcmp();
	fct_strcpy();
	fct_strlen();
	return (0);
}
