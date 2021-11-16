/*
Filename:Wk3Pt2B.cpp
Creation Date: 10-30-2021
Author: Clint Kline
Purpose:
    - description. not finished. must still solve problem of maintaining p
    punctuation position.
*/

#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>
#include <vector>

using namespace std;

char punc;
vector<char> symbols{',', '.', '?', ';', ':', '!'};

string rotate(string input);
bool isVowel(char ch);
string pigLatinString(string input);
void sentenceToWords(string input);
void punctuation(string word);

string rotate(string input)
// move first letter to the end of the word
{
    string::size_type len = input.length();
    string output;
    output = input.substr(1, len - 1) + input[0];
    return output;
}

bool isVowel(char ch)
// returns true if the letter input in a vowel
{

    switch (ch)
    {

    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        return true;

    default:
        return false;
    }
}

string pigLatinString(string input)
// find the pig latin form of 'input'
{
    string::size_type len;
    string::size_type counter;
    bool foundVowel;

    // if the first letter is a vowel
    if (isVowel(input[0]))
        // add -way to end of word
        input = input + "-way";

    // if the first letter is a consanent
    else
    {
        // add - to the end of the word
        input = input + '-';
        // rotate the word to move the first letter into place after the -
        input = rotate(input);
        // create a variable to rep the number of char in the word
        len = input.length();
        // create a flag to record whether or not the char is a vowel, set to false
        foundVowel = false;

        // loop through each letter of the word
        for (counter = 1; counter < len - 1; counter++)
            // call isVowel func for current char
            // if the 1st char is a vowel
            if (isVowel(input[0]))
            {
                // change foundVowel flag to true
                foundVowel = true;
                break;
            }
            // if the char is not a vowel rotate the word 1 letter
            else
                input = rotate(input);
        // if there are no vowels in the word
        if (!foundVowel)
            // add -way to the end of the word
            input = input.substr(1, len) + "-way";
        // if the foundVowel flag is true
        else
            // just as ay
            input = input + "ay";
    }
    return input;
};

void sentenceToWords(string input)
{
    // print the value of the input variables
    // cout << input << endl;

    string word;
    vector<string> sentence;

    // print length of input
    // cout << input.size() - 1 << endl;
    // cout << endl;

    // seperate each word into its own vector element
    for (int i = 0; i < input.size(); i++)
    {
        char ch;
        ch = input[i];

        // cout << ch << endl;
        // if the char is a letter or a number
        if (!isblank(ch))
        {
            // append letter to word;
            word += ch;
            // print word
            // cout << "word : " << word << endl;
        }
        // if the char is not a letter or a number
        else
        {
            // append word to the sentence vector
            sentence.push_back(word);
            // print a notification that the word has been saved in the vector
            cout << "saved : " << word << "\n"
                 << endl;
            // reset/clear the word
            word = "";
        }
    }
    // print the number of elements in the sentence vector
    cout << "\nsentence : " << sentence.size() << endl;

    // for each word in the sentence vector
    string output;

    for (int j = 0; j < sentence.size(); j++)
    {
        // send the current word to the pigLatin function to 'translate' and add a space to the end of the word
        cout << pigLatinString(sentence.at(j)) << ' ';
        // ???? send the pigLatin word to the punctuation function??????
        punctuation(word);
    }
}

void punctuation(string word)
{

    // add punctuation to end of sentence
    // search the current word, if any symbols in the symbols array are found save them
    // and add them to the end of the sentence

    //  for each symbol in the symbol array
    for (int j = 0; j <= symbols.size() - 1; j++)
    {
        // create a var to rep the current symbol
        char symbol = symbols[j];

        // print the current symbol
        // cout << "\nsymbols[j] : " << symbols[j] << endl;
        // cout << "symbol : " << symbol << "\n"
        //      << endl;

        // measure the length of the word
        int len = word.length() + 1;
        // print the length of the word
        // cout << "word length : " << len << endl;

        // cout << "string::npos : " << string::npos << endl;

        // // print if the current symbol is in the current word
        // cout << "wordFind : " << word.find(symbol) << endl;

        // test if the current symbol is in the current word
        if (word.find(symbol) != string::npos)
        {
            // concatenate word and symbol
            cout << symbol;
        }
    }
    // cout << word;
};

// initiate program, get input, pass to pigLatinString();
int main()
{
    string sentence;

    cout << "Enter a sentence! : " << endl;
    cout << ">> ";
    getline(cin, sentence);

    sentenceToWords(sentence);

    return 0;
};