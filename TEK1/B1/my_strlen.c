/*
** EPITECH PROJECT, 2020
** strln
** File description:
** strlen
*/

int  my_strlen(char  const *str)
{
    int r = 0 ;
    while (str[r] != '\0')
        r = r + 1;
    return(r);
}
