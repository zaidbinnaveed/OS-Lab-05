#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char buffer[100];
    ssize_t bytes_read;
    
    fd = open("input.txt", O_RDONLY);
    
    if (fd == -1) {
        printf("Error: input.txt does not exist!\n");
        return 1;
    }
    
    printf("File contents:\n");
    printf("----------------\n");
    
    while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0) {
        write(1, buffer, bytes_read);
    }
    
    if (bytes_read == -1) {
        printf("\nError reading file!\n");
        close(fd);
        return 1;
    }
    
    printf("\n----------------\n");
    printf("File read successfully!\n");
    
    close(fd);
    return 0;
}
