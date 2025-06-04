#include "../include/junior_developer.hpp"

JuniorDeveloper::JuniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Prints a message and simulates solving a problem like a junior developer
void JuniorDeveloper::solve_problem() const {
    std::cout << *this << "Ah Shit, Here We Go Again" << std::endl;
    drink_coffee();
}