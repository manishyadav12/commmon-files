#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

string findCommonSubstring(const string &str1, const string &str2, const string &str3)
{
    string commonSubstring;
    for (size_t i = 0; i < str1.length(); ++i)
    {
        for (size_t len = 1; i + len <= str1.length(); ++len)
        {
            string substring = str1.substr(i, len);
            if (str2.find(substring) != string::npos && str3.find(substring) != string::npos)
            {
                if (substring.length() > commonSubstring.length())
                {
                    commonSubstring = substring;
                }
            }
        }
    }
    return commonSubstring;
}

int main()
{
    ifstream file1("file1.txt");
    ifstream file2("file2.txt");
    ifstream file3("file3.txt");

    if (!file1 || !file2 || !file3)
    {
        cerr << "Error opening files." << endl;
        return 1;
    }

    string content1((istreambuf_iterator<char>(file1)), istreambuf_iterator<char>());
    string content2((istreambuf_iterator<char>(file2)), istreambuf_iterator<char>());
    string content3((istreambuf_iterator<char>(file3)), istreambuf_iterator<char>());

    string commonSubstring = findCommonSubstring(content1, content2, content3);

    if (commonSubstring.empty())
    {
        cout << "No common substring found." << endl;
    }
    else
    {
        cout << "Common substring: " << commonSubstring << endl;
    }

    return 0;
}
