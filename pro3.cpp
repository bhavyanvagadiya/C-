#include<iostream>
using namespace std;

int main()
{
    string Word;
    cout << "Enter any word or sentence: "<<endl;
    cin >> Word;

    int Length = Word.length();
    cout << "Length of word is:" << Length;
    return 0;
}
