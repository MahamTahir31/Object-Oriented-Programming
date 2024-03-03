// Abstract Base Class & Pure Virtual Functions

#include <iostream>
#include <cstring>

using namespace std;
// abstract class
class PoetryByMaham
{
protected:
    string title;
    float rating;
public:
    PoetryByMaham(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() = 0; // do nothing function --> pure virtual function (we have to write this same name function in derived class(s))
};
class poem : public PoetryByMaham
{
    int lines;

public:
    poem(string s, float r, int l) : PoetryByMaham(s, r)
    {
        lines = l;
    }
    void display()
    {
        cout << "This is an amazing poem with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Lines of this poem are: " << lines << endl;
    }
};
class lyrics : public PoetryByMaham
{
    int words;

public:
    lyrics(string s, float r, int w) : PoetryByMaham(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing lyrics with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 starts" << endl;
        cout << "words in this lyrics are: " << words << endl;
    }
};
int main()
{
    string title;
    float rating;
    int words, lines;

    // for poem
    title = "Once upon a time";
    lines = 12;
    rating = 4.3;
    poem poem1(title, rating, lines);
    poem1.display();

    // for lyrics
    title = "Once upon a time";
    words = 60;
    rating = 4.3;
    lyrics lyric(title, rating, words);
    lyric.display();

    PoetryByMaham *collec[2];
    collec[0] = &poem1;
    collec[1] = &lyric;

    collec[0]->display(); // if base class display would not virtual then it will be called so virtual solved this problem
    collec[1]->display();
    return 0;
}
// in abstract class, at least one pure virtual function must be present