#include "stdafx.h"
#include "stdafx.h"
#include <string>
#include <iostream>
using namespace System;
<<<<<<< HEAD
bool Guess(int number) {
static int target = -1;
if (target == -1) {
Random r;
target = r.Next() % 100 + 1;
}
if (number == target) {
std::cout << "Correct !!";
target = -1;
return true;
}
else if (number > target) std::cout << "Smaller" << std::endl;
else if (number < target) std::cout << "Bigger" << std::endl;
return false;
=======
bool Guess(int number)
{
>>>>>>> 46f3143d876a705789c8bc7944025b61eff02926
}
int main(array<System::String^>^ args)
{
    int guess;

    do
    {
        std::cout << "Choose a number between 1 - 100 :";
        std::cin >> guess;
    }
    while (!Guess(guess));

    return 0;
}