#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "ABC";
    int numRows = 1;
    string strArr[numRows];
    int indx = 0;
    int flag = 0;
    int inc = 1;

    for (int i = 0; i < s.size(); i++)
    {
        strArr[indx] += s[i];
        indx = (indx + inc);
        if (indx < 0)
        {
            flag = 0;
            if (numRows < 2)
            {
                indx += 1;
            }
            else
            {
                indx += 2;
            }
        }
        else if (indx >= numRows)
        {
            if (numRows < 2)
            {
                indx -= 1;
            }
            else
            {
                indx -= 2;
            }
            flag = 1;
        }
        if (flag == 0)
        {
            inc = 1;
        }
        else
        {
            inc = -1;
        }
    }
    string result = "";
    for (int i = 0; i < numRows; i++)
    {
        result += strArr[i];
    }
    cout << result << endl;
    return 0;
}