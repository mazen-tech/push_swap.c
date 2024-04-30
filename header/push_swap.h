#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdbool.h> //boolian liberary
# include <limits.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_push_swap
{
    int value;
    int index;
    struct s_push_swap *next;
} t_push_swap;


//Lists functions 
t_push_swap *ft_addnew(int value);
t_push_swap *ft_findlast(t_push_swap *head);
void ft_addfront(t_push_swap **stack, t_push_swap *new);
void ft_addback(t_push_swap **stack, t_push_swap *new);
int ft_stacksize(t_push_swap *head);

//LIBFT functions 
size_t	ft_strlen(const char *str);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
long	ft_atoi(const char *str);
int		ft_isdigit(int c);


//utils
void	error_message(char *msg);
void	check_args(int argc, char **argv);
int		is_sorted(t_push_swap **stack);

//sort options 
void		pa(t_push_swap **stack_a, t_push_swap **stack_b, bool correct);
void		pb(t_push_swap **stack_a, t_push_swap **stack_b, bool correct);
int		sa(t_push_swap **stack_a);
int		sb(t_push_swap **stack_b);
int		ss(t_push_swap **stack_a, t_push_swap **stack_b);
int		ra(t_push_swap **stack_a);
int		rb(t_push_swap **stack_b);
int		rr(t_push_swap **stack_a, t_push_swap **stack_b);
int		rra(t_push_swap **stack_a);
int		rrb(t_push_swap **stack_b);
int		rrr(t_push_swap **stack_a, t_push_swap **stack_b);
int		index_distance_head(t_push_swap **stack, int index);

//Algorithem
void sort_3(t_push_swap **stack_a);
void sort_4(t_push_swap **stack_a, t_push_swap **stack_b);
void sort_5(t_push_swap **stack_a, t_push_swap **stack_b);
void simple_sort(t_push_swap **stack_a, t_push_swap **stack_b);
void radix_sort(t_push_swap **stack_a, t_push_swap **stack_b);

#endif