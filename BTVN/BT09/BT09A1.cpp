#include <iostream>
#include <cstring>

using namespace std;

char* concat(const char* s1, const char* s2)
{
    int length = strlen(s1) + strlen(s2);
    char* ans = new char[length];
    strcpy(ans, s1);
    strcat(ans, s2);

    return ans;
}

int main()
{
    char s1[] = "Hello ";
    char s2[] = "world!";

    cout << concat(s1, s2);

    return 0;
}

