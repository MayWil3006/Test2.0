#include "../include/junior_developer.hpp"

/**
 * @brief Constructs a JuniorDeveloper object.
 * @param name The name of the junior developer.
 * @param alias The alias of the junior developer.
 */
JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

/**
 * @brief Solves a problem specific to a junior developer.
 * Prints a message indicating the start of solving a problem and then simulates drinking coffee.
 * The message includes the developer's name and alias.
 */
void JuniorDeveloper::solve_problem() const {
    std::cout << *this << "Ah Shit, Here We Go Again" << std::endl;
    drink_coffee();
}