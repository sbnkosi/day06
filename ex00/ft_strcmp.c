char	ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    int j = 0;
    int c = 0;
    char *dest;
    while(s1[j])
    j++;
    while(s2[c])
    c++;
    if(j > c)
    {
        dest = s1;
    }
    else
    {
        dest = s2;
    }
    while(dest[i] != '\0')
    {
        if(s1[i] != s2[i])
        {
           return s1[i] - s2[i];
        }
        i++;
    }
    return 0;
}
