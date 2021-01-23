#include <bits/stdc++.h>
using namespace std;
int main()
{
    string num;
    cin >> num;
    int ln = num.length();
    // cout<<ln<<endl;
    string oneline[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string twoline[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string tens[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string tenpower[] = {"hundred", "thousand"};
    if (ln == 0)
    {
        cout << "String is empty";
    }
    else if (ln == 1)
    {
        cout << oneline[num[0] - '0'];
    }
    else
    {
        int i =0;
        while(i != '\0')
        {
            if (ln >= 3)
            {
                if (num[i] - '0' != 0)
                {
                    cout << oneline[num[i] - '0'];
                    cout << tenpower[ln - 3];
                }
                --ln;
            }
            else
            {
                if (num[i] == '1')
                {
                    int sum = num[i] - '0' + (num[i] + 1) - '0';
                    cout << twoline[sum];
                }
                else if (num[i] == '2' && (num[i] + 1) == '0')
                {
                    cout << "twenty" << endl;
                }
                else
                {
                    int temp = num[i] - '0';
                    cout << temp ? tens[i] : "";
                    ++i;
                    if (num[i] != '0')
                    {
                        cout << oneline[num[i] - '0'];
                    }
                }
            }
            ++i;
        }
    }

    return 0;
}