//#include <cstring>
//#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    char str1[] = "This a string";
    char str2[] = "This is another string";

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    cout << "Length of str1 = " << len1 << endl;
    cout << "Length of str2 = " << len2 << endl;
    if (len1 > len2)
        cout << "str1 is longer than str2";
    else if (len1 < len2)
        cout << "str2 is longer than str1";
    else
        cout << "str1 and str2 are of equal length";

    return 0;
}
