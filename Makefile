##
## Makefile for Makefile in /home/t3i/shifumi/ngo_t/shifumi
## 
## Made by NGO tri
## Login   <ngo_t@etna-alternance.net>
## 
## Started on  Fri Oct 27 23:10:09 2017 NGO tri
## Last update Fri Oct 27 23:15:50 2017 NGO tri
##
MY_FUNC =       shifumi

SRC =		main.c \
		my_getnbr.c \
		my_put_nbr.c \
		my_putchar.c \
		my_putstr.c \
		my_strcmp.c \
		putsign.c \
		random3.c \
		random5.c \
		readline.c \
		shifumi3.c \
		shifumi5.c


OBJ =           $(SRC:.c=.o)
RM =            rm -f


all:	$(MY_FUNC)

$(MY_FUNC):	$(OBJ)
	gcc -W -Wall -Werror -o $(MY_FUNC) $(OBJ)
	ranlib $(MY_FUNC)
clean:
	$(RM) $(OBJ)

fclean:	clean
	$(RM) $(MY_FUNC)

re:    	fclean all

.PHONY:
