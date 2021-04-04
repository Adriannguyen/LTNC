#include <iostream>

using namespace std;

int length(const char* a)
{
    int ans = 0;
    for(int i = 0; *(a+i) != '\0'; i++)
        ans++;
    return ans;
}

void copy_str(char* destination, const char* source)
{
    int N = length(source);
    for(int i=0; i<N; i++)
    {
        destination[i] = source[i];
    }
}

void erase(char a[], int index)
{
    int N = length(a);
    for(int i=index; i<N; i++)
    {
        a[i] = a[i+1];
    }
}

char* reverse(const char* a)
{
    int N = length(a);
    char *ans = new char[N+1];
    ans[N] = NULL;
    for(int i=0; i<N; i++)
    {
        ans[i] = a[N-i-1];
    }
    return ans;
}

char* delete_char(const char* a, char c)
{
    int N = length(a);
    char *ans = new char[N+1];
    ans[N] = NULL;
    copy_str(ans, a);
    for(int i=0; i<N; i++)
    {
        if(ans[i] == c)
        {
            erase(ans, i);
            i--;
        }
    }
    return ans;
}

char* pad_right(const char* a, int n)
{
    int N = length(a);
    char* ans = new char[n+1];
    ans[n] = NULL;
    copy_str(ans, a);
    for(int i=N; i<n; i++)
        ans[i] = ' ';
    return ans;
}

char* pad_left(const char* a, int n)
{
    int N = length(a);
    char* ans = new char[n+1];
    ans[n] = NULL;
    for(int i=0; i<n-N; i++)
    {
        ans[i] = ' ';
    }
    for(int i=n-N; i<n; i++)
    {
        ans[i] = a[i-n+N];
    }
    return ans;
}

char* truncate(const char* a, int n)
{
    int N = length(a);
    char *ans = new char[n+1];
    ans[n] = NULL;
    if(N > n)
    {
        for(int i=0; i<n; i++)
            ans[i] = a[i];
    }
    else
    {
        for(int i=0; i<N;i++)
            ans[i] = a[i];
    }
    return ans;
}

char* trim_left(const char* a)
{
    int N = length(a);
    char* ans = new char[N+1];
    ans[N] = NULL;
    copy_str(ans, a);
    while(*ans == ' ')
        erase(ans, 0);
    return ans;
}

char* trim_right(const char* a)
{
    int N = length(a);
    char* ans = new char[N+1];
    ans[N] = NULL;
    copy_str(ans, a);
    for(int i=N-1; i>=0; i--)
    {
        if(ans[i] != ' ') break;
        erase(ans, i);
    }
    return ans;
}

int main()
{
    char testChar1[] = "Hello";
    char testChar2[] = "  Hello  ";

    cout << reverse(testChar1) << "\n";

    cout << delete_char(testChar1, 'l') << "\n";

    cout << pad_right(testChar1, 8) << 0 << "\n";
    cout << pad_left(testChar1, 8) << "\n";

    cout << truncate(testChar1, 3) << "\n";

    cout << trim_left(testChar2) << 0 << "\n";
    cout << trim_right(testChar2) << "\n";

    return 0;
}

