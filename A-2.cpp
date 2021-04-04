#include<iostream>

using namespace std;

//phan a.
/*int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   return 0;
}*/
//phan b.
/*int main()
{
    int a[6]={3, 97, 6, 1, 8, 20};
    for(int *cp = a; cp < a + 6; cp++)
    {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}*/
//phan c.
/*int main()
{
    double a[6]={0.7, 9.2, 6.5, 1.8, 21.12, 34.4};
    for(double *cp = a; cp < a + 6; cp++)
    {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}*/
//phan d.
int main()
{
    double a[6]={0.7, 9.2, 6.5, 1.8, 21.12, 34.4};
    for(double *cp = a; cp < a + 6; cp+2)
    {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    return 0;
}
// chuong trinh chay vo han voi kich thuoc cua a[1] lap di lap lai


