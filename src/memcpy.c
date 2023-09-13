void m_memcpy(void *buf1, void *buf2, int n)
{
    char *p = (char *)buf1;
    char *q = (char *)buf2;
    for (int i = 0; i < n; i++)
    {
        (*p++) = (*q++);
    }
    return;
}
