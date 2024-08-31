// branch main RevA

#include <iostream>
using namespace std;

int main()
{
    int a[4] = {1, 2, 3, 4};
    int b[2][3] = {1, 2, 3, 4, 5, 6};
    const char *c[3] = {"henry", "jaden", "noopy"};

    int *p1;         // 一级指针，指向整型数值
    const char **p2; // 二级指针，指向指针数值，此指针指向整型数值
    int *p3[4];      // 指针数组，每个数组元素为指针
    int(*p4)[3];     // 指向整型数组的指针

    p1 = &a[1];
    cout << p1 << endl;
    cout << *p1 << endl;

    p1 = a; // 一维数组的名称指向首元素a[0]的地址，即此数组的首地址
    cout << p1 << endl;
    cout << *p1 << endl;
    cout << a + 1 << endl;
    cout << *(a + 1) << endl;

    p4 = b; // 二维数组的名称指向首元素（一维数组）的首地址，对应指针类型也得是指向数组的指针
    cout << p4 << endl;
    cout << *p4 << endl;
    cout << *(*(p4 + 1) + 2) << endl;
    cout << *(*(b + 1) + 0) << endl;

    cout << "pls input an integer1" << endl;
    cin >> *(p1 + 1);
    cout << "a[1]= " << a[1] << endl;

    cout << "pls input an integer2" << endl;
    cin >> *(*(p4 + 1) + 0);
    cout << "b[1][0]= " << b[1][0] << endl;

    p2 = c; // 字符串本身对应一维字符数组，用char *表示，所以字符串数组首地址就是指向指针的指针
    cout << p2 << endl;
    cout << *p2 << endl;
    cout << *(p2 + 1) << endl;

    return 0;
}