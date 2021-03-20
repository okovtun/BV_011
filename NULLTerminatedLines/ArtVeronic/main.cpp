//
//  main.cpp
//  Null_terminated_lines
//
//  Created by Vera El Moutaouakil on 15.03.21.
//

#include <iostream>
#include <map>
#include <regex>
#include <iterator>

using namespace std;

int StrLen(char str[]);
void to_upper(char str[]);
void to_lower(char str[]);
void youSay(string text);
void youAnswer(string text);
string meAsk();
string shrink(char str[]);

map <string, string> database = {
	{
		"(hello|privet)",
		"Hello humanoid friend"
	},
	{
		"(how are you|how do you do|wazzap|whatup)",
		"Still computing PI to the trillionth digit"
	},
	{
		"what are you doing",
		"Answering stoopid questions"
	},
	{
		"is anything else you know",
		"things you know, but im here to support"
	},
	{
		"exit",
		"BYE"
	},
};

int main() {
	setlocale(LC_ALL, "");
	//char sz_st[] = {'H','e','l','l','o',0}; // String zero
	//char sz_st[] = "Hello";
	//cout << sz_st<<endl;
	//cout << sizeof (sz_st)<<endl;
	//cout << sizeof ("Hello")<<endl;
	//const int n = 40;
	//char sz_str[n] ={};
	//cout <<" Enter a string:"<<endl;
	//SetConsoleCP(866);
	//cin>> sz_str; // dlia cin probel javlaitdia osnovnum razdelitelem
	//cout << sz_str<<endl;
	//cin.getline (sz_str,n);
	//cout<<sz_str<<endl;
	//cout << sizeof (sz_str)<<endl;
	//cout << StrLen(sz_str)<<endl;
	string question;

	youSay("Hello Dear User, My name is Programming Teacher");

	string temp = "hallo bla bla!";
	char * str = new char[temp.length() + 1];
	strcpy(str, temp.c_str());
	shrink(str);

	while (true)
	{
		question = meAsk();

		youAnswer(question);

		if (question == "exit")
			break;


	}
}
int StrLen(char str[])
{
	int i = 0;
	for (; str[i]; i++);
	return i;
}

/*void to_upper (char str[])
{
	for (int i=0;str[i];i++)
	{
		if( str[i]>=
		   )
	}
}
*/
string to_upper(string text) {

	transform(text.begin(), text.end(), text.begin(), ::toupper);

	return text;
}

string to_lower(string text) {

	transform(text.begin(), text.end(), text.begin(), ::tolower);

	return text;
}

void lowerCase(string& text) {
	transform(text.begin(), text.end(), text.begin(), ::tolower);
}

void upperCase(string& text) {
	transform(text.begin(), text.end(), text.begin(), ::toupper);
}

void youSay(string text) {
	cout << "[YOU]: " << text << endl;
}

string meAsk() {
	string question;
	cout << "[ME]: ";
	getline(cin, question);
	// question = to_lower(question);
	lowerCase(question);
	return question;
}

void youAnswer(string text) {

	bool isNAnswered = true;
	for (auto entry : database)
	{
		// entry.first - вопрос
		// entry.second - ответ
		regex regularExpression = regex(".*" + entry.first + ".*");
		if (regex_match(text, regularExpression))
		{
			cout << "[YOU]: " << (entry.second) << endl;
			isNAnswered = false;
		}
	}

	if (isNAnswered)
	{
		cout << "[YOU]: " << "Sorry I dont know how to answer this :(" << endl;
	}
}

string shrink(char str[])
{
	cout << str << endl;
	string copy = "";

	size_t length = sizeof(str) / sizeof(str[0]);
	//cout << sizeof(str) << ":"  << sizeof(str[0]) << endl;

	for (int i = 0; i < length * 2; i++)
	{
		if (str[i] != ' ')
			copy += str[i];
	}

	cout << copy << endl;
	return copy;

}

