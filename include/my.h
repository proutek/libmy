#ifndef 	_MY_H_
# define 	_MY_H_

/* ===== { include } ===== */
# include	<unistd.h>
# include	<stdlib.h>
# include	<stdio.h>
# include	<stdarg.h>

/* ===== { define } ===== */
# define	SIZE	10
# define	ERROR	-1
# define	SUCCESS	0

/* ===== { Macro } ===== */

/* ===== { Typedef } ===== */

/* ===== { structure } ===== */
typedef struct	s_ext
{
  char		*opt;
  int		len;
  char		*base;
  char *(*func)(void *parm, char *base, char *param);
}		t_ext;

typedef struct	s_list
{
  char		let;
  struct s_list	*next;
}		t_list;

/* ===== { prototipe } ===== */
/* home */
char		*get_next_line(const int fd);

/* cmp */
int		my_strncmp(char *s1, char *s2, int n);
int		my_strcmp(char *s1, char *s2);

/* concat */
char		*my_ev_strlcat(char *d, char *src, int beg, int end);
char		*my_ev_strncat(char *d, char *src, int size);
char		*my_strncat(char *dest, char *src, int n);
char		*my_ev_strcat(char *d, char *src);
char		*my_fcat(char *str, ...);

/* copy */
char		*my_strlcpy(char *dest, char *src, int beg, int size);
char		*my_strncpy(char *dest, char *src, int n);
char		*my_strcpyn(char *dest, char *src, int n);
char		*my_ev_strcpy(char *dest, char *src);
char		*my_strcpy(char *dest, char *src);

/* other/check_base */
int             let_in_list(char let, t_list *list);
void		*in_crochet(char *ag, char **arg);
void		free_list(t_list *list);
void            aff_list(t_list *list);
char		*check_ag_base(char *ag, char **arg);
char            *validation_base(char **arg);
t_list          *add(t_list *list, t_list *new);
t_list          *init_elem(void);

/* other/parse_str */
t_ext		*tab_ext(void);
char		*parse_arg(char **str, va_list ap, int *beg);
char		*rec_arg(char **str, char **arg, int *end);
char		*parse_str(char *str, va_list ap);
char		*call_func(char **ag, va_list ap);
int		len_arg(char *str, int *end);

/* other/ret */
char 		*ret_us_nbr_base(void *var, char *base, char *ag);
char 		*ret_lg_nbr_base(void *var, char *base, char *ag);
char		*ret_nbr_base(void *var, char *base, char *ag);
char 		*ret_char(void *var, char *base, char *ag);
char 		*ret_str(void *var, char *base, char *ag);
int	    	check_len(char *s, int b, int e);

/* other/str */
int		set_born(char *arg, int *beg, int *end);

/* print */
int		my_fprintf(int fd, char *str, ...);
int		my_printf(char *str, ...);

/* utils */
char            **my_str_to_wordtab(char *str, char op);
char		*my_strdup(char *src);
char		*my_revstr(char *str);
int		my_strlen(char *str);
int             my_getnbr(char *str);
int		len_tab(char **tab);
void		aff_tab(char **tab);

#endif 		/* !_MY_H_ */
