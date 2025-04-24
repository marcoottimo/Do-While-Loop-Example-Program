//
// Created by marco on 26/01/2025.
//
#include <iostream>
#include <vector>
int main() {
    std::vector <int> vec {1, 2, 3, 4, 5};
    char selection {};
    do {
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "C - Clears the vector" << std::endl;
        std::cout << "F - Find a number in vector" << std::endl;
        std::cout << "Q - Quit" << std::endl;

        std::cin >> selection;
        selection = std::toupper(selection);

        int num_to_add {};
        int max_num {};
        int min_num {};
        int average {};
        int num_to_find {};
        int num_found_counter {};


        switch (selection) {
            case 'P':
                for (auto i : vec) {
                    if (i == vec.at(0)) {
                        std::cout << "[ " << i;
                        if (vec.size() == 1) {
                            std::cout << " ]" << std::endl;
                        }
                        continue;
                    }
                    else if (i == vec.at(vec.size() - 1)) {
                        std::cout << " " << i << " ]" << std::endl;
                        continue;
                    }
                    std::cout << " " <<  i;
                }
                break;
            case 'A':
                std::cout << "Insert a number to add to the vector: ";
                std::cin >> num_to_add;

                vec.push_back(num_to_add);

                std::cout << num_to_add << " added." << std::endl;
                break;
            case 'M':
                for (auto i : vec) {
                    average += i;
                }
                average /= static_cast<int>(vec.size());
                std::cout << average << std::endl;
                break;
            case 'S':
                for (auto i : vec) {
                    if (i < vec.at(i < vec.at(vec.size() - 1))) {
                        min_num = i;
                    }
                }
                std::cout << min_num << std::endl;
                break;
            case 'L':
                for (auto i : vec) {
                    if (i > vec.at(i < vec.at(vec.size() - 1))) {
                        max_num = i;
                    }
                }
                std::cout << max_num << std::endl;
                break;
            case 'C':
                vec.clear();
                std::cout << "Vector cleared successfully." << std::endl;
                break;
            case 'F':
                std::cout << "Enter number to find: ";
                std::cin >> num_to_find;

                for (auto i : vec) {
                    if (vec.at(i) == num_to_find) {
                        num_found_counter++;
                        if (num_found_counter > 1) {
                            std::cout << "Number found" << num_found_counter << std::endl;
                        } else {std::cout << num_to_find << " found at position " << i << std::endl;}
                    }
                    break;
                }


                break;
            default:
                std::cout << "Invalid selection." << std::endl;
                break;
        }

    } while (selection != 'Q');

    return 0;
}