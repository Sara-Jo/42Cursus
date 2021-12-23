char *ft_get_line(char *save)
{
    int i;
    char *s;

    i = 0;
    if (!save[i])
        return (NULL);
    while (save[i] && save[i] != '\n')
        i++;
    s = (char *)malloc(sizeof(char) * (i + 2));
    if (!s)
        return (NULL);
    i = 0;
    while (save[i] && save[i] != '\n')
    {
        s[i] = save[i];
        i++;
    }
    if (save[i] == '\n')
    {
        s[i] = save[i];
        i++;
    }
    s[i] = '\0';
    return (s);
}

char *ft_save(char *save)
{
    int i;
    int c;
    char *s;

    i = 0;
    while (save[i] && save[i] != '\n')
        i++;
    if (!save[i])
    {
        free(save);
        return (NULL);
    }
    s = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
    if (!s)
        return (NULL);
    i++;
    c = 0;
    while (save[i])
        s[c++] = save[i++];
    s[c] = '\0';
    free(save);
    return (s);
}

char *ft_read(ind fd, char *save)
{
    char *buff;
    int read_bytes;

    buff = malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buff)
        return (NULL);
    read_bytes = 1;
    while (!ft_strchr(save, '\n') && read_bytes != 0)
    {
        // buff 에 BUFFER_SIZE 만큼 읽어서 담기
        read_bytes = read(fd, buff, BUFFER_SIZE);
        if (read_bytes == -1)
        {
            free(buff);
            return (NULL);
        }
        buff[read_bytes] = '\0';
        // save 뒤에 buff 붙이기
        save = ft_strjoin(save, buff);
    }
    free(buff);
    return (save);
}

char *get_next_line(int fd)
{
    char *line;
    static char *save;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    // 개행문자나 파일의 맨 끝을 만나기전까지 읽어서 save에 붙이기
    save = ft_read(fd, save);
    if (!save)
        return (NULL);
    // save에서 개행문자 만나기전까지의 문장을 line에 저장
    line = ft_get_line(save);
    // save에서 개행문자 뒤 문자만 남기기
    save = ft_save(save);
    return (line);
}