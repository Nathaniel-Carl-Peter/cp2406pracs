
#include <iostream>

using namespace std;


// Question: Why the following line is here?
string findAndReplace(string haystack, string needle, string replaceWith);


int main()
{

	string haystack {"aaabbbcojncuicb[u2b3]"};
	string needle {"["};
	string replaceWith {"???"};

	string result = findAndReplace(haystack, needle, replaceWith);
	cout << "haystack: " << haystack << endl;
	cout << "needle: " << needle << endl;
	cout << "replaceWith: " << replaceWith << endl;
	cout << "result: " << result << endl;

}

string findAndReplace(string haystack, string needle, string replaceWith) {
	// Make a copy of the haystack.
	string result{ haystack };

	// Find all needles and replace them with the replacement string.
	auto pos{ result.find(needle) };  // is it a good name for "position"?
	if (pos != string::npos) {
		result.replace(pos, needle.length(), replaceWith);
	}	
	return result;
}
