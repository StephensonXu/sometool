#ifndef SOCKETERROR_H
#define SOCKETERROR_H

/* ------------------------------------------- */
/*                 Socket¥ÌŒÛ¥˙¬Î√Ë ˆ          */
/* ------------------------------------------- */

#define TCP_ERROR_NOTINITIALISED	-1001 /* --- Successful WSAStartup not yet performed -----------*/
#define TCP_ERROR_ENOTSOCK			-1002 /* --- Socket operation no nonsocket ---------------------*/
#define TCP_ERROR_ENOBUFS			-1003 /* --- No buffer space available -------------------------*/
#define TCP_ERROR_EMSGSIZE			-1004 /* --- Message is too long -------------------------------*/
#define TCP_ERROR_ENOTCONN			-1005 /* --- Socket is not connected ---------------------------*/
#define TCP_ERROR_EISCONN			-1006 /* --- Socket is already connected -----------------------*/
#define TCP_ERROR_ECONNABORTED		-1007 /* --- Software caused connection abort ------------------*/
#define TCP_ERROR_ECONNREFUSED		-1008 /* --- Connection refused --------------------------------*/
#define TCP_ERROR_ECONNRESET		-1009 /* --- Connection reset by peer --------------------------*/
#define TCP_ERROR_ETIMEDOUT			-1010 /* --- Connection timed out ------------------------------*/
#define TCP_ERROR_ENETDOWN			-1011 /* --- Network is down -----------------------------------*/
#define TCP_ERROR_ENETUNREACH		-1012 /* --- Network is unreachable ----------------------------*/
#define TCP_ERROR_ENETRESET			-1013 /* --- Network dropped connection on reset ---------------*/
#define TCP_ERROR_SYSNOTREADY		-1014 /* --- Network subsystem is unavailable ------------------*/
#define TCP_ERROR_EHOSTUNREACH		-1015 /* --- No route to host ----------------------------------*/
#define TCP_ERROR_EHOSTDOWN		    -1016 /* --- Host is down --------------------------------------*/
#define TCP_ERROR_EADDRINUSE		-1017 /* --- Address already in use ----------------------------*/
#define TCP_ERROR_EWOULDBLOCK		-1018 /* --- Resource temporarily unavailable ------------------*/
#define TCP_ERROR_EACCES		    -1019 /* --- Permission denied ---------------------------------*/
#define TCP_ERROR_EFAULT  		    -1020 /* --- Bad address ---------------------------------------*/
#define TCP_ERROR_EINVAL     		-1021 /* --- Invalid argument ----------------------------------*/
#define TCP_ERROR_EMFILE    		-1022 /* --- Too many open files(sockets) ----------------------*/
#define TCP_ERROR_EINPROGRESS		-1023 /* --- Operaton now in progress --------------------------*/
#define TCP_ERROR_EDESTADDRREQ		-1024 /* --- Destination address required ----------------------*/
#define TCP_ERROR_EPROTOTYPE		-1025 /* --- Protocol wrong type for socket --------------------*/
#define TCP_ERROR_ENOPROTOOPT		-1026 /* --- Bad protocol option -------------------------------*/
#define TCP_ERROR_EPROTONOSUPPORT   -1027 /* --- Protocol not supported ----------------------------*/
#define TCP_ERROR_ESOCKTNOSUPPORT	-1028 /* --- Socket type not supported -------------------------*/
#define TCP_ERROR_EOPNOTSUPP		-1029 /* --- Operation not supported ---------------------------*/
#define TCP_ERROR_EPFNOSUPPORT		-1030 /* --- Protocol family not supported ---------------------*/
#define TCP_ERROR_EAFNOSUPPORT		-1031 /* --- Address family not supported by protocol family ---*/
#define TCP_ERROR_EADDRNOTAVAIL		-1032 /* --- Cannot assign requested address -------------------*/
#define TCP_ERROR_EPROCLIM   		-1033 /* --- Too many process ----------------------------------*/
#define TCP_ERROR_VERNOTSUPPORTED	-1034 /* --- Winsock.dll version out of range ------------------*/
#define TCP_ERROR_EINTR         	-1035 /* --- Interrupted function call -------------------------*/
#define TCP_ERROR_DEFAULT			-1036 /* --- Other errors --------------------------------------*/

#endif