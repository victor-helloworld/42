#ifndef LIBFT
#define	LIBFT

int	ft_atoi(const char *str);
void	bzero(void *s, size_t n);
void 	*ft_calloc(size_t count, size_t size);
int	isalnum(int c);
int	isalpha(int c);
int	isascii(int c);
int	isdigit(int c);
int	isprint(int c);
void	*memchr(const void *s, int c, size_t n);
int	memcmp(const void *s1, const void *s2, size_t n);
void	*memcpy(void *restrict dst, const void *restrict src, size_t n);
void 	*memmove(void *dst, const void *src, size_t len);
void 	*memset(void *b, int c, size_t len);
char 	*strchr(const char *s, int c);
char 	*strdup(const char *s1);
size_t	strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	strlen(const char *s);
int	strncmp(const char *s1, const char *s2, size_t n);
char 	*strnstr(const char *haystack, const char *needle, size_t len);
char 	*strrchr(const char *s, int c);
int	tolower(int c);
int	toupper(int c);

#endif
