#include <iostream>
#include <limits>
#include <map>
#include <string>

void InputOnlyNum()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
template <class T> void averageTest(T score)
{
    if (score > 49.99)
    {
        std::cout << "Passed";
    }
    else if (score < 50)
    {

        std::cout << "Failed";
    }
    else
    {
        throw std::runtime_error("undefined behavior");
    }
}

int main()
{
    std::map<float, std::string> course{{1, "cpp"}, {2, "eng"},    {3, "physic"},
                                        {4, "dba"}, {5, "csharp"}, {6, "computer architecture"}};
    float score = 0;
    float average = 0;

    for (const auto &i : course)
    {
        std::cout << i.second << ": ";
        while (!(std::cin >> score))
        {
            InputOnlyNum();

            std::cout << i.second << ": ";
        };
        average += score / course.size();
    }
    std::cout << "average: " << average << "\n";
    averageTest<float>(average);
}
