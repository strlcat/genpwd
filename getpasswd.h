#ifndef _GETPASSWD_H
#define _GETPASSWD_H

#define GETP_NOECHO 1
#define GETP_NOINTERP 2

struct getpasswd_state;

typedef int (*getpasswd_filt_t)(struct getpasswd_state *, int, size_t);

struct getpasswd_state {
	char *passwd;
	size_t pwlen;
	const char *echo;
	int maskchar;
	getpasswd_filt_t charfilter;
	int fd;
	int flags;
};

size_t getpasswd(struct getpasswd_state *getps);

#endif