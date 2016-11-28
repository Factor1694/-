#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    float a, b, c, p;
    cout<<"a=";
    cin >>a;
    cout<<"b=";
    cin >>b;
    c=sqrt(pow(a, 2) + pow(b, 2));
    p=a+b+c;
    cout << "Gipotenusa ravna" << c << endl;
    cout << "Perimetr treugolnika" << p << endl;
    return 0;
}
