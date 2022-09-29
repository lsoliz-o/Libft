# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lsoliz-o <lsoliz-o@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/12 18:58:37 by lsoliz-o          #+#    #+#              #
#    Updated: 2022/09/29 21:54:08 by lsoliz-o         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = @ar rcs
RM = rm -f
FILES = ft_memset ft_bzero ft_memcpy ft_memmove ft_strlen ft_strlcpy ft_strlcat \
        ft_strchr ft_atoi ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint \
        ft_toupper ft_tolower ft_calloc ft_strrchr ft_strncmp ft_memchr ft_memcmp \
        ft_strnstr ft_strdup ft_substr ft_strtrim ft_strjoin ft_split ft_atoi \
		ft_strmapi ft_striteri ft_itoa ft_putchar_fd \
		ft_putstr_fd ft_putendl_fd ft_putnbr_fd

FILES_B = ft_lstnew_bonus ft_lstadd_front_bonus ft_lstsize_bonus ft_lstlast_bonus \
 ft_lstadd_back_bonus ft_lstdelone_bonus ft_lstclear_bonus ft_lstiter_bonus ft_lstmap_bonus

INC = libft.h
SRCS_DIR = ./src

SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

OBJS_DIR = ./

OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

NAME_B = .bonusfile

$(NAME): $(OBJS)
	$(AR) $@ $^

.c.o:
	$(CC) $(CFLAGS) -c -o $@ $< -I $(INC)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME)

re: clean all

bonus:	$(NAME_B)

$(NAME_B):		$(OBJS) $(OBJS_B)
		@ar rc $(NAME) $(OBJS) $(OBJS_B)
		@touch $(NAME_B)

.PHONY: all clean fclean re bonus
