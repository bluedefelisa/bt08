#include<iostream>

using namespace std;

void f(int xval)
{
   int x;
   x = xval;
   cout << &x;// in địa chỉ của x tại đây
}
void g(int yval)
{
   int y;
   cout << &y;// in địa chỉ của y tại đây
}
int main()
{
   f(7);
   cout << endl;
   g(11);
   return 0;

   /* dia chi cua x va y bang nhau
    vi ham f va g cung co 1 tham so kieu i,
    cung kieu tra ve, vi tri cua stack farme cho
    ham f khi chay trung voi g khi no duoc goi*/
}


