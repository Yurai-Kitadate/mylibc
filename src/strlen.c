int m_strlen(const char *s)
{
    int res = 0;
    while (*s)
    {
        s++;
        res++;
    }
    return res;
}
