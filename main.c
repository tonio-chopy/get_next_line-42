int main(void)
{
	int	fd, fd2, fd3;
	char *line;
	
	fd = open("text.txt", O_RDONLY);
	fd2 = open("text2.txt", O_RDONLY);
	fd3 = open("text3.txt", O_RDONLY);
	do {
		line = get_next_line(fd);
		printf("fd :%s", line);
		free(line);
	} while (line);
	close(fd);
	do {
		line = get_next_line(fd2);
		printf("fd2 :%s", line);
		free(line);
	} while (line);
	close(fd);
	do {
		line = get_next_line(fd3);
		printf("fd3 :%s", line);
		free(line);
	} while (line);
	close(fd);
}
