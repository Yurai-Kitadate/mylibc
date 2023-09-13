void m_memset(void *buf, int ch, int n)
{
    char *p = (char *)buf;
    char c = ch;
    for (int i = 0; i < n; i++)
    {
        (*p++) = c;
    }
    return;
}
