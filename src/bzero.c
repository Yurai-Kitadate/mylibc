void m_bzero(void *buf, int n)
{
    char *p = (char *)buf;
    for (int i = 0; i < n; i++)
    {
        (*p++) = 0;
    }
    return;
}
