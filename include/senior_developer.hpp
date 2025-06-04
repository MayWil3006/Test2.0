#ifndef SENIOR_DEVELOPER_HPP_wZaTL4PTjB
#define SENIOR_DEVELOPER_HPP_wZaTL4PTjB

#include "developer.hpp"

/**
 * @brief The SeniorDeveloper class represents a senior developer, derived from Developer.
 */
class SeniorDeveloper : public Developer {
public:
    /**
     * @brief Constructs a SeniorDeveloper object.
     * @param name The name of the senior developer.
     * @param alias The alias of the senior developer.
     * 
     * Usage:
     * @code
     * SeniorDeveloper sd("Diana Prince", "Wonder Woman");
     * @endcode
     */
    SeniorDeveloper(const std::string& name, const std::string& alias);

    /**
     * @brief Solves a problem specific to a senior developer.
     * 
     * Usage:
     * @code
     * sd.solve_problem();
     * @endcode
     */
    void solve_problem() const override;
};

#endif // SENIOR_DEVELOPER_HPP