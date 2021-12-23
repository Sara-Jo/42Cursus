/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjo <sjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 17:04:52 by sjo               #+#    #+#             */
/*   Updated: 2021/12/23 17:46:48 by sjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_save(char *save)
{
    int i;
    int j;
    char *tmp;

    i = 0;
    while (save[i] && save[i] != '\n')
        i++;
    tmp = (char *)malloc(sizeof(char) * (ft_strlen(save) - i + 1));
    if (!tmp)
        return (NULL);
    i++;
    j = 0;
    while (save[i])
        tmp[j++] = save[i++];
    tmp[j] = '\0';
    free(save);
    return (tmp);
}

char *ft_get_line(char *save)
{
    int i;
    char *tmp;

    i = 0;
    while (save[i] && save[i] != '\n')
        i++;
    tmp = (char *)malloc(sizeof(char) * (i + 2));
    if (!tmp)
        return (NULL);
    i = 0;
    while (save[i] && save[i] != '\n')
    {
        tmp[i] = save[i];
        i++;
    }
    tmp[i++] = '\n';
    tmp[i] = '\0';
    return (tmp);
}

char *ft_read(int fd, char *save)
{
    char *buff;
    ssize_t return_bytes;

    buff = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (!buff)
        return (NULL);
    return_bytes = 1;
    while (!ft_strchr(save, '\n') && return_bytes != 0)
    {
        return_bytes = read(fd, buff, BUFFER_SIZE);
        if (return_bytes == -1)
        {
            free(buff)
            return (NULL);
        }
        buff[return_bytes] = '\0';
        save = ft_strjoin(save, buff);
    }
    free(buff);
    return (save);
}

char *get_next_line(int fd)
{
    static char *save;
    char *line;

    if (fd < 0 || BUFFER_SIZE <= 0)
        return (0);
    save = ft_read(fd, save);
    if (!save)
        return (NULL);
    line = ft_get_line(save);
    save = ft_save(save);
    return (line);
}