#ifndef JUNIOR_DEVELOPER_HPP_681D9NobPn
#define JUNIOR_DEVELOPER_HPP_681D9NobPn

#include "developer.hpp"

// Represents a junior-level developer, derived from Developer
class JuniorDeveloper : public Developer {
public:
    // Initializes a junior developer with name and alias
    JuniorDeveloper(const std::string& name, const std::string& alias);

    // Implements the solve_problem method for a junior developer
    void solve_problem() const override;
};

#endif // JUNIOR_DEVELOPER_HPP_681D9NobPn