#include <stdio.h>

int main(int argc, char *argv[]) {
    int distance = 650000L;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'A';
    char fisrt_name[] = "Zed";
    char last_name[] = "Shaw";

    char empty[] = "";
    int hexa = 0x23;
    int octa = 012;

    printf("You are %d miles away.\n", distance);
    printf("You have %.3f levels of power.\n", power);
    printf("You have %040.2f awesome super power\n", super_power);
    printf("I have an initial %c.\n", initial);
    printf("I have a first name %s.\n", fisrt_name);
    printf("I have a last name %s. \n", last_name);
    printf("My whole name is %s %c %s.\n", fisrt_name, initial, last_name);

    printf("print empty %s.\n", empty);
    printf("hexa %#x.\n", hexa);
    printf("octa %o.\n", octa);
    return 0;
}
