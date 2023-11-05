#include <stdio.h>
int main(void){
char input[] = "42 3.14 hello";
int num;
float f;
char word[10];

int result = sscanf_s(input, "%d %f %9s", &num, &f, word, sizeof(word));

if (result == 3) {
    // Successfully read 3 values.
    // num contains 42, f contains 3.14, and word contains "hello".
} else {
    // Handle the failure or error case.
}
}