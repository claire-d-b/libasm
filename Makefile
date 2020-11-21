FT_READ		= srcs/ft_read.s
FT_STRCMP	= srcs/ft_strcmp.s
FT_STRCPY	= srcs/ft_strcpy.s
FT_STRDUP	= srcs/ft_strdup.s
FT_STRLEN	= srcs/ft_strlen.s
FT_WRITE	= srcs/ft_write.s

ALL_O		= srcs/ft_read.o\
			srcs/ft_strcmp.o\
			srcs/ft_strcpy.o\
			srcs/ft_strdup.o\
			srcs/ft_strlen.o\
			srcs/ft_write.o\

SRC_C		= main.c

OBJ		= $(SRC_C:.c=.o)
NAME		= libasm.a
NAME_EXE	= libasm
CC		= gcc
RUN_EXE	= -o
RUN_SRC_ASM	= nasm -f elf64
RUN_SRC_C		= -c
INCL		= -include
HEADER		= libasm.h
LIB		= ar -rcs
INCL_LIB	= -I
RM		= rm -f
CFLAGS		= -Wall -Wextra -Werror
.c.o:
		@$(CC) $(RUN_SRC_C) $(CFLAGS) $(SRC_C) $(INCL) $(HEADER)
obj_asm:	
		@$(RUN_SRC_ASM) $(FT_READ)
		@$(RUN_SRC_ASM) $(FT_STRCMP)
		@$(RUN_SRC_ASM) $(FT_STRCPY)
		@$(RUN_SRC_ASM) $(FT_STRDUP)
		@$(RUN_SRC_ASM) $(FT_STRLEN)
		@$(RUN_SRC_ASM) $(FT_WRITE)
$(NAME):		obj_asm
			@$(LIB) $(NAME) $(ALL_O)
all:		$(NAME)
exe:		$(NAME) $(OBJ)
		@$(CC) $(INCL_LIB) $(NAME) $(RUN_EXE) $(NAME_EXE) $(ALL_O) $(OBJ)
clean:
		@$(RM) $(ALL_O) $(OBJ)
fclean:		clean
		@$(RM) $(NAME) $(NAME_EXE)
re:			fclean all
.PHONY:		all clean fclean re exe obj_asm