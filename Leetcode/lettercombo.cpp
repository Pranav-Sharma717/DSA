#include <iostream>
#include <map>
#include <string>

int main()
{
    std::map<int, std::string> student_map = {
        {1, "Jacqueline"},
        {2, "Blake"},
        {3, "Cherry"}};

    int search_key = 2;
    // Use map::find() to search for the key
    std::map<int, std::string>::iterator it = student_map.find(search_key);

    // Check if the key was found by comparing the iterator with map::end()
    if (it != student_map.end())
    {
        std::cout << "Key found: " << it->first << " -> " << it->second << std::endl;
    }
    else
    {
        std::cout << "Key " << search_key << " not found." << std::endl;
    }

    // Example of a key not found
    search_key = 2;
    it = student_map.find(search_key);
    if (it != student_map.end())
    {
        std::cout << "Key found: " << it->first << " -> " << it->second << std::endl;
    }
    else
    {
        std::cout << "Key " << search_key << " not found." << std::endl;
    }

    return 0;
}
