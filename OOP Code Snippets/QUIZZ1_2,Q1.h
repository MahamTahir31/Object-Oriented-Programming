#ifndef QUIZZ1_2,Q1_h
#define QUIZZ1_2,Q1_h

#include <iostream>
using namespace std;

class LINE_SEGMENT{
    private:
        int starting_point;
        int ending_point;
    public:
        LINE_SEGMENT();
        LINE_SEGMENT(int sp, int ep);
        LINE_SEGMENT(const LINE_SEGMENT &L);
        void display();
};
#endif