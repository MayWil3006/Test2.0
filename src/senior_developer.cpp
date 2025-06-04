#include "../include/senior_developer.hpp"

SeniorDeveloper::SeniorDeveloper(const std::string& name, const std::string& alias)
    : Developer(name, alias) {}

// Prints a confident message and simulates solving a problem like a senior developer
void SeniorDeveloper::solve_problem() const {
    std::cout << *this << "I Won" << std::endl;
    drink_coffee();
}