#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while(cin >> s && s[0] != '.')
	{
		int i = 1;
		int subString = 1;
		int length = s.length();
		while(i < length)
		{
			while(s[i] != s[i % subString])
				++subString;
			++i;
		}
		cout << (length % subString?1:length / subString) << '\n';
	}
	return 0;
}
