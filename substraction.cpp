#include <iostream>
int main()
{
    int correct = 9;
    int questions = 15;
    int score = correct / (double)questions * 100;
    std::cout << score << "%";
}