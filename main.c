#include <stdio.h>
#define MAX 1000
#define SIZE 50


int main(){
    FILE *in, *out;
    in = fopen("input.txt", "r");
    out = fopen("output.txt", "w");

    char str[MAX][SIZE] = {0};
    int k = 0;
    while (fgets(str[k], sizeof(str[k]), in) != NULL)
    {
        k++;
    }
//one
    for (int i = 0 ;;){}
    fclose(in);
    fclose(out);
    return 0;
}
