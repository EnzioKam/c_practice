#include <stdio.h>

int main() {
    FILE *fp;

    fp = fopen("test.txt", "w+");
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    char buff[255];

    fp = fopen("test.txt", "r");

    fscanf(fp, "%s", buff); // reads to first space
    printf("1 : %s\n", buff );

    fgets(buff, 255, (FILE*)fp); // reads to newline
    printf("2: %s\n", buff );

    fgets(buff, 255, (FILE*)fp); // reads to EOF
    printf("3: %s\n", buff );

    fclose(fp);

    return 0;
}
