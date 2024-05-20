#include "Identify.hpp"

int main()
{
    srand(static_cast<unsigned>(time(NULL)));

    Base *ptr = create();
    if (!ptr)
    {
        std::cerr << "Failed to create object!" << std::endl;
        return (1);
    }

    std::cout << "Identify type from pointer : ";
    identifyPointer(ptr);
    std::cout << "Identify type from reference : ";
    identifyReference(*ptr);

    delete (ptr);
    return (0);
}
