#include "project/map.h"

#include <iostream>
#include <string>
#include <vector>

int main() {
    Map scores;

    scores.insert("Alice", 95);
    scores.insert("Bob", 88);
    scores.insert("Charlie", 91);

    std::cout << "Size: " << scores.size() << '\n';
    std::cout << "Contains Bob? " << (scores.contains("Bob") ? "yes" : "no") << '\n';
    std::cout << "Alice's score: " << scores.at("Alice") << '\n';

    scores.update("Bob", 93);
    std::cout << "Bob's updated score: " << scores.at("Bob") << '\n';

    std::vector<std::string> keys = scores.keys();
    std::cout << "Keys in sorted order:";
    for (const std::string& key : keys) {
        std::cout << ' ' << key;
    }
    std::cout << '\n';

    scores.erase("Charlie");
    std::cout << "Contains Charlie after removal? " << (scores.contains("Charlie") ? "yes" : "no") << '\n';

    return 0;
}
