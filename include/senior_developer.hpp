#ifndef SENIOR_DEVELOPER_HPP_wZaTL4PTjB
#define SENIOR_DEVELOPER_HPP_wZaTL4PTjB

#include "developer.hpp"

// Represents a senior-level developer, derived from Developer
class SeniorDeveloper : public Developer {
public:
    // Initializes a senior developer with name and alias
    SeniorDeveloper(const std::string& name, const std::string& alias);

    // Implements the solve_problem method for a senior developer
    void solve_problem() const override;
};

#endif // SENIOR_DEVELOPER_HPP_wZaTL4PTjB