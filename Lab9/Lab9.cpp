#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

string formatting(string);

int main()
{
    cout << "Enter text: ";
    string text;
	getline(cin, text);
	cout << "Result: " << formatting(text) << "\n";
}

string formatting(string text)
{
    int sequenceNumber = 0;
    int p = 0; 
    bool New = false; 
    int firstWord; 
    int lastWord;
    text += " ";
    while (p < text.length())
    {
        if (!isspace(text[p]))
        {
            firstWord = p;
            lastWord = text.find(" ", firstWord);
            sequenceNumber++;
            New = true;
        }
        if (New && sequenceNumber % 2 == 0)
        {
            text.erase(firstWord, lastWord - firstWord);
        }
        else if (New)
        {
            p = lastWord;
        }
        p++;
        New = false;
    }
    text.pop_back();
    return text;
}