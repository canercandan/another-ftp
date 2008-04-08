/*
** requests.h for my_ftp in /home/candan_c/rendu/project/my_ftp
** 
** Made by caner candan
** Login   <candan_c@epitech.net>
** 
** Started on  Mon Apr  7 16:12:27 2008 caner candan
** Last update Tue Apr  8 14:31:09 2008 caner candan
*/

#ifndef __REQUESTS_H__
# define __REQUESTS_H__

/*
** server requests
*/

# define SRV_ABOR	"ABOR"
# define SRV_ACCT	"ACCT"
# define SRV_ALLO	"ALLO"
# define SRV_APPE	"APPE"
# define SRV_CDUP	"CDUP"
# define SRV_CWD	"CWD"
# define SRV_DELE	"DELE"
# define SRV_EPRT	"EPRT"
# define SRV_EPSV	"EPSV"
# define SRV_FEAT	"FEAT"
# define SRV_HELP	"HELP"
# define SRV_LIST	"LIST"
# define SRV_LPRT	"LPRT"
# define SRV_LPSV	"LPSV"
# define SRV_MDTM	"MDTM"
# define SRV_MKD	"MKD"
# define SRV_MODE	"MODE"
# define SRV_NLST	"NLST"
# define SRV_NOOP	"NOOP"
# define SRV_PASS	"PASS"
# define SRV_PASV	"PASV"
# define SRV_PORT	"PORT"
# define SRV_PWD	"PWD"
# define SRV_QUIT	"QUIT"
# define SRV_REST	"REST"
# define SRV_RETR	"RETR"
# define SRV_RMD	"RMD"
# define SRV_RNFR	"RNFR"
# define SRV_RNTO	"RNTO"
# define SRV_SITE	"SITE"
# define SRV_SIZE	"SIZE"
# define SRV_STAT	"STAT"
# define SRV_STOR	"STOR"
# define SRV_STOU	"STOU"
# define SRV_STRU	"STRU"
# define SRV_SYST	"SYST"
# define SRV_TYPE	"TYPE"
# define SRV_USER	"USER"
# define SRV_XCUP	"XCUP"
# define SRV_XCWD	"XCWD"
# define SRV_XMKD	"XMKD"
# define SRV_XPWD	"XPWD"
# define SRV_XRMD	"XRMD"

/*
** client requests
*/

# define CLI_ACCT	"account"
# define CLI_APPE	"append"
# define CLI_ASCII	"ascci"
# define CLI_BELL	"bell"
# define CLI_BIN	"binary"
# define CLI_BYE	"bye"
# define CLI_CASE	"case"
# define CLI_CWD	"cd"
# define CLI_CDUP	"cdup"
# define CLI_CHMOD	"chmod"
# define CLI_CLOSE	"close"
# define CLI_CR		"cr"
# define CLI_DEBUG	"debug"
# define CLI_DELE	"delete"
# define CLI_DIR	"dir"
# define CLI_DISCO	"disconnect"
# define CLI_EDIT	"edit"
# define CLI_EPSV4	"epsv4"
# define CLI_EXIT	"exit"
# define CLI_FEAT	"features"
# define CLI_FGET	"fget"
# define CLI_FORM	"form"
# define CLI_FTP	"ftp"
# define CLI_GATE	"gate"
# define CLI_GET	"get"
# define CLI_GLOB	"glob"
# define CLI_HASH	"hash"
# define CLI_HELP	"help"
# define CLI_IDLE	"idle"
# define CLI_IMAGE	"image"
# define CLI_LCD	"lcd"
# define CLI_LESS	"less"
# define CLI_LPAGE	"lpage"
# define CLI_LPWD	"lpwd"
# define CLI_LS		"ls"
# define CLI_MACDEF	"macdef"
# define CLI_MDELETE	"mdelete"
# define CLI_MDIR	"mdir"
# define CLI_MGET	"mget"
# define CLI_MKDIR	"mkdir"
# define CLI_MLS	"mls"
# define CLI_MLSD	"mlsd"
# define CLI_MLST	"mlst"
# define CLI_MODE	"mode"
# define CLI_MODTIME	"modtime"
# define CLI_MORE	"more"
# define CLI_MPUT	"mput"
# define CLI_MREGET	"mreget"
# define CLI_MSEND	"msend"
# define CLI_NEWER	"newer"
# define CLI_NLIST	"nlist"
# define CLI_NMAP	"nmap"
# define CLI_NTRANS	"ntrans"

#endif 	/* !__REQUESTS_H__ */
