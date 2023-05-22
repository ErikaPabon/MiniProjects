// vowels_consonants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>//string.h 

using namespace std;

int countvowels(string);//function header

//bool vowels(char, char);//???function to count vowels

int main() 
{
    string str;//to hold space
    int v, c;

    cout << "This program counts the vowels and consonants in a word\n";
    cout << "Please introduce a word: ";
    cin >> str;
// << countvowels(str)<< endl;
    v = countvowels(str);// numb of vowels on int
    c = str.length() - v;//count number of consonants

    cout << "There are "<< v << " vowels and " << c << " consonants" << endl;
    return 0;
}

int countvowels(string str)//prototype function
{
    int count = 0;
    int conscount = 0;
    char a;


    for (int i = 0; i < str.length(); i++) {
        a = str.at(i);//print at specific location/
        if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
            a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'y' || a == 'Y') {//if vowel is on string, checking on the vowel.
            count++;
        }
    }
    return count;//after the loop 
}

//output:

//This program counts the vowels and consonants in a word
//Please introduce a word : mountain
//There are 4 vowels and 4 consonants

//This program counts the vowelsand consonants in a word
//Please introduce a word : house
//There are 3 vowels and 2 consonants

//bool vowels(char a, char c)//char
//{
   // return (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' ||
       // a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U' || a == 'y' || a == 'Y');
    //return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
//}
    //bool consonants(char c)
    //{
       // return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        //int count = 0
           
   // }
    //for (int i = 0; a[i] != '\0'; ++i)
    //{
        //if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || 
           // a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U' || a[i] == 'y' || a[i] == 'Y');
       // ++v;
       // else if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
           // ++c;
    //}
//}
//vowels = a, e, i, o, u, y;
    //while (word contains)

