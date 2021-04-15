# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ygaiero <yoanngaiero@gmail.com>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/04/15 15:47:54 by ygaiero           #+#    #+#              #
#    Updated: 2021/04/15 15:47:55 by ygaiero          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# EXECUTABLE GENERE

NAME = libft.a

# COMPILATEUR

CC = gcc
CFLAGS = -Wall -Wextra -Werror

# CLEAN

RM = rm -f

# SOURCES

SRC = ft_atoi.c  \
	ft_isalnum.c \
	ft_isalpha.c \
	ft_isascii.c \
	ft_isdigit.c \
	ft_isprint.c \
	ft_strlen.c  \
	ft_tolower.c \
	ft_toupper.c \
	ft_strchr.c  \
	ft_strrchr.c  \
	ft_strlcpy.c  \
	ft_strlcat.c  \
	ft_strncmp.c  \
	ft_memset.c   \
	ft_memcpy.c   \
	ft_memccpy.c  \
	ft_memmove.c  \
	ft_memcmp.c   \
	ft_bzero.c    \
	ft_memchr.c   \
	ft_strnstr.c  \
	ft_calloc.c   \
	ft_strdup.c   \
	ft_substr.c   \
	ft_strncpy.c  \
	ft_strjoin.c  \
	ft_strcpy.c   \
	ft_strtrim.c  \
	ft_split.c    \
	ft_strcat.c   \
	ft_itoa.c     \
	ft_strmapi.c  \
	ft_putchar_fd.c  \
	ft_putstr_fd.c   \
	ft_putendl_fd.c   \
	ft_putnbr_fd.c   \

SRC_BONUS =  ft_lstnew.c  \
	ft_lstadd_front.c     \
	ft_lstsize.c          \
	ft_lstlast.c          \
	ft_lstadd_back.c      \
	ft_lstdelone.c        \
	ft_lstclear.c         \
	ft_lstiter.c          \
	ft_lstmap.c           \

OBJ = $(SRC:.c=.o)

OBJ_BONUS = $(SRC_BONUS:.c=.o)

$(NAME): $(OBJ)
		ar -rcs $(NAME) $(OBJ)


# ------------------ COMMANDES ---------------------

# PREMIERE TARGET

all: $(NAME)

# BONUS

bonus:  $(OBJ) $(OBJ_BONUS)
		ar -rcs $(NAME) $(OBJ) $(OBJ_BONUS)

# CLEAN LES EXECUTABLES
clean: 
		$(RM) $(OBJ) $(OBJ_BONUS)

# CLEAN LES EXECUTABLES ET L'EXECUTABLE PRINCIPAL
fclean: clean	
		$(RM) $(NAME)

# RESET
re: fclean all

.phony: $(NAME) re all clean fclean