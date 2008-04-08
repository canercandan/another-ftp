##
## Makefile for my_ftp in /home/candan_c/rendu/project/my_ftp_new
## 
## Made by caner candan
## Login   <candan_c@epitech.net>
## 
## Started on  Thu Apr  3 09:18:14 2008 caner candan
## Last update Tue Apr  8 14:58:40 2008 caner candan
##

CLI		=	client
SRV		=	server

SRC		=	xsocket.c		\
			xbind.c			\
			xlisten.c		\
			xaccept.c		\
			xrecv.c			\
			xsend.c			\
			xconnect.c		\
			parse_arg.c		\
			create_server.c		\
			get_client.c		\
			send_cmd.c		\
			send_cmd_client.c	\
			send_cmd_server.c	\
			send_cmd_param.c	\
			trim.c			\
			req_init.c		\
			req_list.c		\
			req_pwd.c

CLI_SRC		=	client.c		\
			$(SRC)

SRV_SRC		=	server.c		\
			$(SRC)

CLI_OBJ		=	$(CLI_SRC:.c=.o)
SRV_OBJ		=	$(SRV_SRC:.c=.o)

INCLUDES	=	-I.
CFLAGS		=	$(INCLUDES) -g -Wall -W

CC		=	gcc
RM		=	rm -rf
MK		=	make

all		:
			@$(MK) $(CLI)
			@$(MK) $(SRV)

$(CLI)		:	$(CLI_OBJ)
			@$(CC) -o $@ $(CLI_OBJ)

$(SRV)		:	$(SRV_OBJ)
			@$(CC) -o $@ $(SRV_OBJ)

clean		:
			$(RM) *~
			$(RM) *.o

fclean		:	clean
			$(RM) $(CLI)
			$(RM) $(SRV)

re		:	fclean all

.PHONY		:	all clean fclean re
