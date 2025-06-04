#ifndef DEVELOPER_HPP_k6Sknix0TE
#define DEVELOPER_HPP_k6Sknix0TE

#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

/**
 * @brief The Developer class represents a developer with a name, alias, and logo.
 */
class Developer {
public:
    /**
     * @brief Constructs a Developer object.
     * @param name The name of the developer.
     * @param alias The alias of the developer.
     * 
     * Usage:
     * @code
     * Developer dev("John Doe", "JD");
     * @endcode
     */
    Developer(const std::string& name, const std::string& alias);

    /**
     * @brief Virtual destructor for the Developer class.
     */
    virtual ~Developer() = default;

    /**
     * @brief Simulates drinking coffee.
     * 
     * Usage:
     * @code
     * Developer::drink_coffee();
     * @endcode
     */
    static void drink_coffee();

    /**
     * @brief Loads a logo from a file.
     * @param filepath The path to the file containing the logo.
     * @throws std::runtime_error If the file cannot be opened.
     * 
     * Usage:
     * @code
     * dev.load_logo_from_file("path/to/logo.txt");
     * @endcode
     */
    void load_logo_from_file(const std::string& filepath);

    /**
     * @brief Gets the name of the developer.
     * @return The name of the developer.
     * 
     * Usage:
     * @code
     * std::string name = dev.get_name();
     * @endcode
     */
    auto get_name() const -> const std::string&;

    /**
     * @brief Gets the alias of the developer.
     * @return The alias of the developer.
     * 
     * Usage:
     * @code
     * std::string alias = dev.get_alias();
     * @endcode
     */
    auto get_alias() const -> const std::string&;

    /**
     * @brief Gets the logo of the developer.
     * @return The logo of the developer.
     * 
     * Usage:
     * @code
     * std::string logo = dev.get_logo();
     * @endcode
     */
    auto get_logo() const -> const std::string&;

    /**
     * @brief Solves a problem. This method must be implemented by derived classes.
     */
    virtual void solve_problem() const = 0;

    /**
     * @brief Output stream operator for Developer.
     * @param output_stream The output stream.
     * @param dev The Developer object.
     * @return The output stream.
     * 
     * Usage:
     * @code
     * std::cout << dev;
     * @endcode
     */
    friend auto operator<<(std::ostream& output_stream, const Developer& dev) -> std::ostream&;

private:
    std::string name_; ///< The name of the developer.
    std::string alias_; ///< The alias of the developer.
    std::string logo_; ///< The logo of the developer.
};

#endif // DEVELOPER_HPP
