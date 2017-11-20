/**
 * Student struct. The struct represents a student's details.
 * @attributes: int age, string first_name, string last_name, int standard
 * The program takes input from stdin
 * @input:  line 1: integer representing age
 *          line 2: string consisting of lowercase characters representing first name
 *          line 3: string consisting of lowercase characters representing last name
 *          line 4: integer representing the standard of the student
 * @output: A single line to stdout containing age, first_name, last_name, standard separated by a single space
 * @author: Vernon Cuipers
 * @date: 20/11/2017
 */

#include <iostream>


struct Student {
    int age = 0;
    std::string first_name = nullptr;
    std::string last_name = nullptr;
    int standard = 0;
};


int main() {
    Student st;

    std::cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    std::cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard << std::endl;

    return 0;
}

