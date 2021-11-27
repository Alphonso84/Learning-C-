// for.cpp by Bill Weinman [bw.org]
// updated 2020-06-24
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int get_number() {
    return 3;
}

int main() {
    string my_string = "Hi there my friend!\n";
    //printf("%s\n", my_string.c_str());
    int message_length = my_string.length();
    get_number();
    printf("%i\n", message_length);
    printf("The number is %i\n", get_number());
    cout << my_string;
    //cout << my_string ;
    return 0;
}



