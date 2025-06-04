#include "../include/senior_developer.hpp"

/**
 * @brief Constructs a SeniorDeveloper object.
 * @param name The name of the senior developer.
 * @param alias The alias of the senior developer.
 */
SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

/**
 * @brief Solves a problem specific to a senior developer.
 * Prints a message indicating the completion of solving a problem and then simulates drinking coffee.
 * The message includes the developer's name and alias.
 */
void SeniorDeveloper::solve_problem() const {
    std::cout << *this << "I Won" << std::endl;
    drink_coffee();
}