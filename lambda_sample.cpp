#include <iostream>

int TestFunc(int param)
{
    std::cout << "Function Pointer" << param << std::endl;
    return param;
}

int main()
{
    auto func = [](int param) -> int
    {
        std::cout << "Lambda: " << param << std::endl;
        return param;
    };

    //call lambda
    func(5);

    //call by function pointer
    auto functionPointer = TestFunc;
    functionPointer(10);

    return 0;
}