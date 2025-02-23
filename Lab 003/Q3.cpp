#include <iostream>
using namespace std;

int main()
{

    char data[] =
        "I tried to reach Sarah at her @gmail.com address, but you can also reach me at @icloud.com for more privacy, while John sent his proposal from his @outlook.com account and Jane replied from her @yahoo.com account";


    int count = 0;
    for (int i = 0; data[i] != '\0'; i++)
        if (data[i] == '@')
            count++;

    char** mails = new char* [count];


    int Index = 0;
    for (int i = 0; data[i] != '\0'; i++)
    {
        if (data[i] == '@')
        {
            int start = i + 1;
            int end = start;

            while (data[end] != '.' && data[end] != '\0')
                end++;

            int length = end - start;

            mails[Index] = new char[length + 1];

            for (int j = 0; j < length; j++)
                mails[Index][j] = data[start + j];

            mails[Index][length] = '\0';

            Index++;
        }
    }

    cout << "Extracted Mails: \n";
    for (int i = 0; i < count; i++) 
        cout << mails[i] << endl;
    


    for (int i = 0; i < count; i++) 
        delete[] mails[i];

    delete[] mails;

    system("pause");
    return 0;
}
