#include "../header/push_swap.h"

/*check if a given integer is present in a given array*/
static int ft_contains(int num, char **argv, int i)
{
    i++;
    while(argv[i])
    {
        if(ft_atoi(argv[i]) == num)
            return (1);
        i++;
    }
    return (0);
}

/*checks if a given string represents a valid integer num*/
static int ft_isnum(char *num)
{
    int i;

    i = 0;
    if(num[0] == '-' || num[0] == '+')
        i++;
    if((num[0] == '-' || num[0] == '+') && !num[1])
        return (0);

    while(num[i])
    {
        if(!ft_isdigit(num[i]))
            return (0);
        i++;
    }
    return (1);
}

/*Takes a string argument av and splits it into an array of strings*/
static char **argc2(char *av)
{
    char **args;
    args = ft_split(av. ' ');
    return (args);
}

void check_args(int argc, char **argv)
{
    int i;
    long tmp;
    char **args;

    i = 1;
    if(argc == 2)
        args = argc2(argv[1]);
    else
        args = argv;
    while(args[i])
    {
        tmp = ft_atoi(args[i]);
        if(!ft_isnum(args[i]))
            error_message("Error");
        if(ft_contains(tmp, args, i) == 1)
            error_message("Error");
        if(tmp < INT_MIN || tmp > INT_MAX)
            error_message("Error");
        i++;
    }
    if (argc == 2)
        free_string(args);
}