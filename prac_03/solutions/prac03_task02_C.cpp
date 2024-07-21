
#include <iostream>

using namespace std;


// Question? why "const string& " and not juct "string "?
string findAndReplace(const string& haystack, const string& needle, const string& replaceWith) {
	// Make a copy of the haystack.
	string result{ haystack };

	// auto pos{ result.find(needle) };  // is it a good name for "position"?
	// if (pos != string::npos) {
	// 	result.replace(pos, needle.length(), replaceWith);
	// }	
	
	// Find all needles and replace them with the replacement string.
	auto position{ result.find(needle) };
	while (position != string::npos) {
		result.replace(position, needle.length(), replaceWith);
		position = result.find(needle, position + needle.size());
	}

	return result;
}


int main()
{

	// string haystack {"aaabbbcojncuicb[u2b3]"};
	// string needle {"["};
	// string replaceWith {"???"};

	string haystack;
	cout << "Enter source string: ";
	getline(cin, haystack);

	// Ask for the string to find (= needle).
	string needle;
	cout << "Enter string to find: ";
	getline(cin, needle);

	// Ask for the replacement string.
	string replacement;
	cout << "Enter replacement string: ";
	getline(cin, replacement);

	// QUESTION: why not "result = findAndReplace"?
	string result {findAndReplace(haystack, needle, replacement)};
	cout << "haystack: " << haystack << endl;
	cout << "needle: " << needle << endl;
	cout << "replacement: " << replacement << endl;
	cout << "result: " << result << endl;

}

