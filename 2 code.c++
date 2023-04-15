#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void wordBreak(vector<string> const &dict, string str, string out)
{
if (str.size() == 0)
{
cout << out << endl;
return;
}
for (int i = 1; i <= str.size(); i++)
{
string prefix = str.substr(0, i);
if (find(dict.begin(), dict.end(), prefix) != dict.end())
{
wordBreak(dict, str.substr(i), out + " " + prefix);
}
}
}
int main()
{
vector<string> dict = {"one","two","three","four" };
string str = "onetwo";
wordBreak(dict, str, "");
return 0;
}
