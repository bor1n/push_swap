cmake_minimum_required(VERSION 3.19)
project(libft C)

set(CMAKE_C_STANDARD 99)

add_library(libft    ft_toupper.c	ft_strtrim.c	ft_putnbr_fd.c
        ft_putendl_fd.c	ft_putchar_fd.c	ft_putstr_fd.c	ft_strmapi.c	ft_itoa.c
        ft_strjoin.c	ft_substr.c		ft_atoi.c		ft_calloc.c
        ft_split.c		ft_strdup.c		ft_strlcpy.c	ft_strlcat.c	ft_strnstr.c
        ft_strncmp.c 	ft_tolower.c	ft_strrchr.c	ft_strchr.c		ft_memset.c
        ft_bzero.c 		ft_memcpy.c 	ft_memccpy.c 	ft_memmove.c 	ft_strlen.c
        ft_memchr.c		ft_memcmp.c		ft_isprint.c 	ft_isalpha.c 	ft_isdigit.c
        ft_isascii.c 	ft_isalnum.c	ft_putunbr_fd.c	ft_putunbr_base_fd.c
        ft_lstnew.c		ft_lstadd_front.c	ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c
        ft_lstclear.c	ft_lstiter.c	)