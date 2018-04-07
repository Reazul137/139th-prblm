#include<iostream>
using namespace std;
int main()
{
    int ang1, ang2, ang3;

    cout << "\n\n Find the third angle of a triangle : \n";
    cout << "------------------------------------------\n";

    cout << " Input the first angle of a triangle : ";
    cin >> ang1;

    cout << " Input the second angle of a triangle : ";
    cin >> ang2;

    ang3 = 180 - (ang1+ang2);

    cout << " The third angle is : " << ang3 << endl;
    cout << endl;

    return 0;

}
