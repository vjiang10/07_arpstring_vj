#include <stdio.h>
#include <string.h>

// prints the contents of char array arr
void print_arr(char *ip, int size) {
    int i;
    for (i = 0; i < size; i++) 
        printf("arr[%d]: %c\n", i, ip[i]);
    printf("\n");
}


// 1.
float int_arr_avg(int *ip, int size) {
    float sum = 0;
    int i;
    for (i = 0; i < size; i++)
        sum += ip[i]; 
    return sum/size;
}

// 2.
void copy_arr(char *ip1, char *ip2) {
    while (*ip1) {
        *ip2 = *ip1;
        ip1++;
        ip2++;
    }
}

// 3.
int len_arr(char *ip) {
    int len = 0;
    while (*(ip+len)) 
        len++;
    return len;
}

int main() {
    // testing int_arr_avg
    int int_arr1[4] = {5,1,3,4};
    printf("average of int values in int_arr1: %f\n", int_arr_avg(int_arr1, 4));
    printf("\n");

    // testing copy_arr
    char s1[] = "1st copy";
    char s2[] = "2nd COPY";
    printf("s1 before:\n");
    print_arr(s1, len_arr(s1));
    printf("s2 before:\n");
    print_arr(s2, len_arr(s2));
    copy_arr(s1, s2);
    printf("s1 after:\n");
    print_arr(s1, len_arr(s1));
    printf("s2 after:\n");
    print_arr(s2, len_arr(s2));

    // testing len_arr
    printf("length of s1(\"1st copy\") is: %d\n", len_arr(s1));
    printf("\n");

    // usage of strcpy
    char s3 [] = "3rd COPY";
    printf("s1 before:\n");
    print_arr(s1, len_arr(s1));
    printf("s3 before:\n");
    print_arr(s3, len_arr(s3));
    strcpy(s3, s1);
    printf("s1 after:\n");
    print_arr(s1, len_arr(s1));
    printf("s3 after:\n");
    print_arr(s3, len_arr(s3));

    // usage of strcat
    char s4 [] = "4th COPY";
    printf("s1 before:\n");
    print_arr(s1, len_arr(s1));
    printf("s4 before:\n");
    print_arr(s4, len_arr(s4));
    strcat(s4, s1);
    printf("s1 after:\n");
    print_arr(s1, len_arr(s1));
    printf("s4 after:\n");
    print_arr(s4, len_arr(s4));

    // usage of strcmp
    char s5[] = "5th COPY";
    if (strcmp(s1, s5) > 0) 
        printf("s1 is greater than s5.\n");
    else if (strcmp(s1, s5) == 0)
        printf("s1 is equal to s5.\n");
    else 
        printf("s1 is less than s5\n");
    printf("\n");

    // usage of strchr
    char s6[] = "this is a random string that just so happens to contain mutliple occurences of 'a'";
    printf("pointer of the first occurrence of 'a': %p\n", strchr(s6, 'a'));
    printf("\n");

    // usage of strrchr
    printf("pointer of the last occurrence of 'a': %p\n", strrchr(s6, 'a'));

    return 0;
}