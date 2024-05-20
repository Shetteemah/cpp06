#include "Serializer.hpp"

int main()
{
    Data data = {"-Hello-", 42, "-World-"};
    uintptr_t raw;

    std::cout << "\033[1m---- Serialize ----\033[0m" << std::endl;
    std::cout << "s1 : \"" << data.s1 << "\"" << std::endl;
    std::cout << "n : " << data.n << std::endl;
    std::cout << "s2 : \"" << data.s2 << "\"" << std::endl;
    raw = Serializer::serialize(&data);
    std::cout << "Serialized data: " << raw << std::endl;
    std::cout << std::endl;

    std::cout << "\033[1m---- Deserialize ----\033[0m" << std::endl;
    Data *deserializedData = Serializer::deserialize(raw);
    std::cout << "s1 : \"" << deserializedData->s1 << "\"" << std::endl;
    std::cout << "n : " << deserializedData->n << std::endl;
    std::cout << "s2 : \"" << deserializedData->s2 << "\"" << std::endl;

    return (0);
}
