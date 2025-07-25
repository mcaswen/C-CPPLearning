#include <stdio.h>

int main() {

    FILE *fp = fopen("genshin.txt", "r");
    char str[100] = "";
    
    if (fp) {

        fscanf(fp, "%s", &str);
        printf("%s\n", str);

    }   else printf("open fail\n");

    return 0;

}