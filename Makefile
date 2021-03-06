##
## Makefile for my_ftp in /home/candan_c/rendu/project/my_ftp_new
## 
## Made by caner candan
## Login   <candan_c@epitech.net>
## 
## Started on  Thu Apr  3 09:18:14 2008 caner candan
## Last update Mon Apr 14 04:48:13 2008 caner candan
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
			create_client.c		\
			get_client.c		\
			get_server.c		\
			trim.c			\
			req_init.c		\
			req_list.c		\
			req_get.c		\
			req_put.c		\
			req_user.c		\
			req_pass.c		\
			req_acct.c		\
			req_pwd.c		\
			req_cwd.c		\
			req_mkd.c		\
			req_dele.c		\
			req_rmd.c		\
			req_port.c		\
			req_mode.c		\
			req_size.c		\
			req_stat.c		\
			req_quit.c		\
			req_rn.c		\
			req_syst.c		\
			req_feat.c		\
			req_epsv.c		\
			req_pasv.c		\
			req_eprt.c		\
			req_noop.c		\
			cmd_init.c		\
			cmd_server.c		\
			cmd_client.c		\
			cmd_exec.c		\
			control_path.c		\
			mesg_start.c		\
			mesg_dump.c		\
			prompt.c		\
			get_next_line.c		\
			client_signal.c		\
			client_send.c		\
			client_listen.c		\
			send_init.c		\
			send_list.c		\
			send_cwd.c		\
			send_pwd.c		\
			send_mkd.c		\
			send_dele.c		\
			send_rn.c		\
			send_rmd.c		\
			send_ftp.c		\
			send_open.c		\
			send_help.c		\
			send_ascii.c		\
			send_binary.c		\
			send_quit.c		\
			send_disc.c		\
			send_get.c		\
			send_put.c		\
			send_noop.c		\
			is_get.c		\
			login_server.c		\
			login_client.c

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
			$(RM) *.core

fclean		:	clean
			$(RM) $(CLI)
			$(RM) $(SRV)

re		:	fclean all

.PHONY		:	all clean fclean re
