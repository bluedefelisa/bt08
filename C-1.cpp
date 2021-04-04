#include<iostream>

using namespace std;

int strlen(char a[])
{
    int length = 0;
    while( a[length] != '\0') length++;
    return length;
}

void reverse(char a[])
{
    for(int i = 0; i < strlen(a)/2; i++)
    {
        char s = a[i];
        a[i] = a[strlen(a)-i-1];
        a[strlen(a)-i-1] = s;
    }
}

void delete_char(char a[], char c)
{
    for(int i = 0; i < strlen(a); i++)
    {
        if(a[i] == c)
        {
            for(int j = i; j < strlen(a); j++)
            {
                a[j] = a[j+1];
            }
        }
    }
}

void pad_right(char a[], int n)
{
    if(strlen(a) == n) return ;
    else
    {
        for(int i = strlen(a); i < n; i++) a[i]=' ';
        a[n]='\0';
    }
}

void pad_left(char a[], int n)
{
    if(strlen(a) == n) return;
    else
        {
    	for(int i = 0; i <= n-strlen(a); i++)
    	{
    		for(int j = i + strlen(a)-1; j >= i; j--)
    		{
    			a[j] = a[j-1];
			}
                a[0]=' ';
		}
    }
}

void truncate(char a[], int n)
{
    if(strlen(a) <= n) return;
    else
    {
        *(a+n)='\0';
    }
}

bool is_palindrome(char a[])
{
    for(int i = 0; i < strlen(a)/2; i++)
    {
        if(*(a+i) != *(a+strlen(a)-i-1)) return false;
    }
    return true;
}

void trim_left(char a[])
{
    for(int i = 0; i < strlen(a); i++)
    {
        if(*(a+i) != ' ') break;
        else
        {
            for(int j =i; j < strlen(a); j++)
            {
                *(a+j) = *(a+j+1);
            }
            i--;
        }
    }
}

void trim_right(char a[])
{
    for(int i = strlen(a)-1; i >= 0; i--)
    {
        if(*(a+i) != ' ')
        {
            *(a+i+1) = '\0'; break;
        }
    }
}

int main()
{
    char a[] = "toilasucsongcuataohoa";
    reverse(a);
    cout << a << endl;
    reverse(a);
    delete_char(a, 's');
    cout << a << endl;
  //pad_right(a, 25);
  //pad_left(a, 35);
    truncate(a, 10);
    cout << a << endl;
    char b[] = "toiliot";
    cout << is_palindrome(b) << endl;
    char c[] = "toi co doi chan di       ";
    trim_right(c);
    cout << c << "|" << endl;
    char d[] = "          rat xa";
    trim_left(d);
    cout << d << endl;
    return 0;
}
