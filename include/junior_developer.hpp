#ifndef JUNIOR_DEVELOPER_HPP_681D9NobPn
#define JUNIOR_DEVELOPER_HPP_681D9NobPn

#include "developer.hpp"

/**
 * @brief The JuniorDeveloper class represents a junior developer, derived from Developer.
 */
class JuniorDeveloper : public Developer {
public:
    /**
     * @brief Constructs a JuniorDeveloper object.
     * @param name The name of the junior developer.
     * @param alias The alias of the junior developer.
     * 
     * Usage:
     * @code
     * JuniorDeveloper jd("Peter Parker", "Spiderman");
     * @endcode
     */
    JuniorDeveloper(const std::string& name, const std::string& alias);

    /**
     * @brief Solves a problem specific to a junior developer.
     * 
     * Usage:
     * @code
     * jd.solve_problem();
     * @endcode
     */
    void solve_problem() const override;
};

#endif // JUNIOR_DEVELOPER_HPP