/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <clde-ber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 16:02:52 by user42            #+#    #+#             */
/*   Updated: 2020/11/26 16:02:57 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

int		fct_read(void)
{
	int		fd;
	char	*string;

	if (!(string = malloc(sizeof(char) * 10000)))
		return (0);
	fd = open("text1.txt", O_RDWR);
	printf("%ld\n", ft_read(-1, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", read(-1, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", ft_read(fd, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", read(fd, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", ft_read(fd, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", read(fd, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", ft_read(fd, string, 0));
	printf("%d\n", errno);
	printf("%ld\n", read(fd, string, 0));
	printf("%d\n", errno);
	free(string);
	return (0);
}

int		fct_read_2(void)
{
	int		fd;
	char	*string;

	if (!(string = malloc(sizeof(char) * 10000)))
		return (0);
	fd = open("text1.txt", O_RDWR);
	printf("%ld\n", ft_read(2, string, -5));
	printf("%d\n", errno);
	printf("%ld\n", read(2, string, -5));
	printf("%d\n", errno);
	printf("%ld\n", ft_read(0, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", read(0, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", ft_read(1, string, 0));
	printf("%d\n", errno);
	printf("%ld\n", read(1, string, 0));
	printf("%d\n", errno);
	printf("%ld\n", ft_read(fd, "", 150));
	printf("%d\n", errno);
	printf("%ld\n", read(fd, "", 150));
	printf("%d\n", errno);
	free(string);
	return (0);
}

int		fct_write(void)
{
	int		fd;
	char	*string;

	if (!(string = malloc(sizeof(char) * 10000)))
		return (0);
	fd = open("text1.txt", O_RDWR);
	printf("%ld\n", ft_write(-3, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", write(-3, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", ft_write(fd, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", write(fd, string, 4));
	printf("%d\n", errno);
	printf("%ld\n", ft_write(fd, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", write(fd, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", ft_write(fd, string, 0));
	printf("%d\n", errno);
	printf("%ld\n", write(fd, string, 0));
	printf("%d\n", errno);
	free(string);
	return (0);
}

int		fct_write_2(void)
{
	int		fd;
	char	*string;

	if (!(string = malloc(sizeof(char) * 10000)))
		return (0);
	fd = open("text1.txt", O_RDWR);
	printf("%ld\n", ft_write(0, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", write(0, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", ft_write(1, string, 0));
	printf("%d\n", errno);
	printf("%ld\n", write(1, string, 0));
	printf("%d\n", errno);
	printf("%ld\n", ft_write(fd, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", write(fd, string, 150));
	printf("%d\n", errno);
	printf("%ld\n", ft_write(fd, "", 150));
	printf("%d\n", errno);
	printf("%ld\n", write(fd, "", 150));
	printf("%d\n", errno);
	free(string);
	return (0);
}

int		fct_strdup(void)
{
	printf("%s\n", ft_strdup("hello"));
	printf("%s\n", strdup("hello"));
	printf("%s\n", ft_strdup(""));
	printf("%s\n", strdup(""));
	printf("%s\n", ft_strdup("salut tiens toi bien ca va etre long"));
	printf("%s\n", strdup("salut tiens toi bien ca va etre long"));
	return (0);
}
