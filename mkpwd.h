#ifndef _MKPWD_H
#define _MKPWD_H

#define MKPWD_NO	0
#define MKPWD_YES	1

#define MKPWD_MAXPWD	256

#define MKPWD_FMT_HEX	-16
#define MKPWD_FMT_DEC	-10
#define MKPWD_FMT_OCT	-8
#define MKPWD_FMT_B64	1
#define MKPWD_FMT_A85	2
#define MKPWD_FMT_A95	3

struct mkpwd_args {
	const char *pwd;
	const char *id;
	const void *salt;
	size_t szsalt;

	short format;
	size_t passes;
	size_t offset;
	size_t length;

	void *result;
	size_t szresult;
	char *error;
};

int mkpwd(struct mkpwd_args *mkpwa);
int mkpwd_key(struct mkpwd_args *mkpwa);
int mkpwd_hint(struct mkpwd_args *mkpwa);

#endif
