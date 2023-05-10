#include <iostream>
using namespace std;

int strlength(char a[])
{
    int size = 0;
    while(a[size] != '\0') size++;
    return size;
}
// đảo ngược xâu
void reverse(char a[])
{
    int size = strlength(a);
    char* rv_a = new char[size];
    for(int i = 0; i < size; i++)
    {
        rv_a[i] = a[size - i - 1];
    }
    for(int i = 0; i < size; i++)
    {
        a[i] = rv_a[i];
    }
    delete[] rv_a;
}
// xóa hết kí tự c
void delete_char(char a[], char c)
{
    int t = 0;
    int size = strlength(a);
    for(int i = 0; i < size; i++)
    {
        if(a[i] != c)
        {
            a[t] = a[i];
            t++;
        }
    }
    a[t] = '\0';
}
// độn phải
void pad_right(char a[], int n)
{
    int size = strlength(a);
    if(size >= n) return;

    for(int i = size; i < n; i++)
    {
        a[i] = ' ';
    }
    a[n] = '\0';

}
// độn trái
void pad_left(char a[],  int n)
{
    int size = strlength(a);
    if(size >= n) return;

    int t = n - size;
    char* b = new char[size + 1];
    for(int i = 0; i < size; i++) b[i] = a[i];
    for(int i = 0; i < t; i++) a[i] = ' ';

    for(int i = 0; i < n; i++)
    {
        if(i >= t) a[i] = b[i - t];
    }
    a[n] = '\0';
}
// cắt xâu
void truncate(char a[], int n)
{
    int size = strlength(a);
    if(size <= n) return;
    a[n] = '\0';
}
// đối gương
bool is_palindrome(char a[])
{
    int size = strlength(a);
    for(int i = 0; i <= size / 2; i++)
    {
        if(a[i] != a[size - i - 1]) return false;
    }
    return true;
}

// lọc trái
void trim_left(char a[])
{
    int size = strlength(a);
    int t = 0;
    for(int i = 0; i < size; i++)
    {
        if(a[i] != ' ') break;
        else t++;
    }
    for(int i = 0; i < size - t; i++)
    {
        a[i] = a[i + t];
    }
    a[size - t] = '\0';
}

// lọc phải
void trim_right(char a[])
{
    int size = strlength(a);
    size--;
    while(a[size] == ' ')
    {
        a[size] = '\0';
        size--;
    }
}
int main()
{
    char s1[] = "Good morning";
    reverse(s1);
    cout << s1 << endl;
    char s2[] = "Hello ba gia";
    delete_char(s2, 'a');
    cout << s2 << endl;
    char s3[] = "Hihi";
    pad_right(s3, 10);
    cout << s3 << endl;
    char s4[] = "Huhu";
    pad_left(s4, 8);
    cout << s4 << endl;
    char s5[] = "Hello every body";
    truncate(s5, 7);
    cout << s5 << endl;
    char s6[] = "abccba";
    cout << is_palindrome(s6) << endl;
    char s7[] = "  Mat thoi gian   ";
    trim_left(s7);
    cout << s7 << endl;
    char s8[] = "   Rat la hay   ";
    trim_right(s8);
    cout << s8 << endl;
    return 0;
}
