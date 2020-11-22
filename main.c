#include "libasm.h"
/*
int fct_read()
{
    int fd;
    int wrong_fd;
    void *string;
    fd = open("text1.txt", O_RDWR);
    wrong_fd = open("text.txt", O_RDWR);
 //   printf("%ld\n", ft_strlen("hello"));
 //   printf("%s\n", ft_strcpy("heheH", "hello"));
 //   printf("%d\n", ft_strcmp("hello", "salut"));
//   printf("\n%ld\n", ft_write(fd, string, 5));
printf("%ld\n", ft_read(wrong_fd, &string, 4));
    printf("%d\n", errno);
   printf("%ld\n", read(wrong_fd, &string, 4));
  // __errno_location();
   printf("%d\n", errno);
printf("%ld\n", ft_read(fd, &string, 4));
    printf("%d\n", errno);
   printf("%ld\n", read(fd, &string, 4));
  // __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_read(fd, &string, 150));
    printf("%d\n", errno);
   printf("%ld\n", read(fd, &string, 150));
 //  __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_read(fd, &string, 0));
    printf("%d\n", errno);
   printf("%ld\n", read(fd, &string, 0));
 //  __errno_location();
   printf("%d\n", errno);
   printf("%ld\n", ft_read(2, &string, -5));
    printf("%d\n", errno);
   printf("%ld\n", read(2, &string, -5));
 //  __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_read(0, &string, 150));
    printf("%d\n", errno);
   printf("%ld\n", read(0, &string, 150));
//   __errno_location();
   printf("%d\n", errno);
   printf("%ld\n", ft_read(1, &string, 0));
    printf("%d\n", errno);
   printf("%ld\n", read(1, &string, 0));
 //  __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_read(fd, "", 150));
    printf("%d\n", errno);
   printf("%ld\n", read(fd, "", 150));
 //  __errno_location();
    printf("%d\n", errno);
    printf("%ld\n", ft_read(fd, string, 150));
    printf("%d\n", errno);
   printf("%ld\n", read(fd, string, 150));
 //  __errno_location();
   printf("%d\n", errno);
 //  printf("%s\n", ft_strdup("hello"));
    return (0);
}*/
/*
int fct_write()
{
    int fd;
    int wrong_fd;
    char *string = "hello there";
    fd = open("text1.txt", O_RDWR);
    wrong_fd = open("text.txt", O_RDWR);
 //   printf("%ld\n", ft_strlen("hello"));
 //   printf("%s\n", ft_strcpy("heheH", "hello"));
 //   printf("%d\n", ft_strcmp("hello", "salut"));
//   printf("\n%ld\n", ft_write(fd, string, 5));
printf("%ld\n", ft_write(wrong_fd, string, 4));
    printf("%d\n", errno);
   printf("%ld\n", write(wrong_fd, string, 4));
  // __errno_location();
   printf("%d\n", errno);
printf("%ld\n", ft_write(fd, string, 4));
    printf("%d\n", errno);
   printf("%ld\n", write(fd, string, 4));
  // __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_write(fd, string, 150));
    printf("%d\n", errno);
   printf("%ld\n", write(fd, string, 150));
 //  __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_write(fd, string, 0));
    printf("%d\n", errno);
   printf("%ld\n", write(fd, string, 0));
 //  __errno_location();
   printf("%d\n", errno);
   printf("%ld\n", ft_write(2, string, -5));
    printf("%d\n", errno);
   printf("%ld\n", write(2, string, -5));
 //  __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_write(0, string, 150));
    printf("%d\n", errno);
   printf("%ld\n", write(0, string, 150));
//   __errno_location();
   printf("%d\n", errno);
   printf("%ld\n", ft_write(1, string, 0));
    printf("%d\n", errno);
   printf("%ld\n", write(1, string, 0));
 //  __errno_location();
   printf("%d\n", errno);
    printf("%ld\n", ft_write(fd, "", 150));
    printf("%d\n", errno);
   printf("%ld\n", write(fd, "", 150));
 //  __errno_location();
    printf("%d\n", errno);
    printf("%ld\n", ft_write(fd, &string, 150));
    printf("%d\n", errno);
   printf("%ld\n", write(fd, &string, 150));
 //  __errno_location();
   printf("%d\n", errno);
 //  printf("%s\n", ft_strdup("hello"));
    return (0);
}*/

/*int fct_strdup()
{
    printf("%s\n", ft_strdup("hello"));
    printf("%s\n", strdup("hello"));
    printf("%s\n", ft_strdup(""));
    printf("%s\n", strdup(""));
    printf("%s\n", ft_strdup("salut tiens toi bien ca va etre long"));
    printf("%s\n", strdup("salut tiens toi bien ca va etre long"));
    printf("%s\n", ft_strdup((char *)1));
    printf("%d\n", errno);
    printf("%s\n", strdup((char *)1));
    printf("%d\n", errno);
    retunr (0);
}*/
/*
int fct_strcmp()
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
    printf("%d\n", ft_strcmp((char *)1, "salut"));
    printf("%d\n", strcmp((char *)1, "salut"));
    return (0);
}*/
/*
int fct_strcpy()
{
    char dest[6];
    char dest0[0];
    printf("%s\n", ft_strcpy(dest, "hello"));
    printf("%s\n", strcpy(dest, "hello"));
    printf("%s\n", ft_strcpy(dest, "helloa"));
    printf("%s\n", strcpy(dest, "helloa"));
    printf("%s\n", ft_strcpy(dest, "hello"));
    printf("%s\n", strcpy(dest, "hello"));
    printf("%s\n", ft_strcpy(dest, "hi"));
    printf("%s\n", strcpy(dest, "hi"));
    printf("%s\n", ft_strcpy(dest0, "hello"));
    printf("%s\n", strcpy(dest0, "hello"));
    printf("%s\n", ft_strcpy(dest, ""));
    printf("%s\n", strcpy(dest, ""));
    printf("%s\n", ft_strcpy(dest, "salut tiens toi bien ca va etre long"));
    printf("%s\n", strcpy(dest, "salut tiens toi bien ca va etre long"));
    printf("%s\n", ft_strcpy((char *)1, "salut"));
    printf("%s\n", strcpy((char *)1, "salut"));
    printf("%s\n", ft_strcpy(0, "hello"));
    printf("%s\n", strcpy(0, "hello"));
    printf("%s\n", ft_strcpy("salut", 0));
    printf("%s\n", strcpy("salut", 0));
    printf("%s\n", ft_strcpy("salut", "hello"));
    printf("%s\n", strcpy("salut", "hello"));
    return (0);
}*/

int fct_strlen()
{
     printf("%ld\n", ft_strlen("hello"));
     printf("%ld\n", strlen("hello"));
     printf("%ld\n", ft_strlen("Calcule moi la longueur de cette interminable chaine"));
     printf("%ld\n", strlen("Calcule moi la longueur de cette interminable chaine"));
     printf("%ld\n", ft_strlen(""));
     printf("%ld\n", strlen(""));
   //  printf("%ld\n", ft_strlen(0));
   //  printf("%ld\n", strlen(0));
     return (0);
}

int main()
{
    fct_strlen();
    return (0);
}