#include "developer.hpp"

/**
 * @brief Constructs a Developer object.
 * @param name The name of the developer.
 * @param alias The alias of the developer.
 */
Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias) {}

/**
 * @brief Simulates drinking coffee.
 * Prints a message to the console indicating that the developer has drunk coffee.
 */
void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!" << "\n" << std::endl;
}

/**
 * @brief Loads a logo from a file.
 * @param filepath The path to the file containing the logo.
 * @throws std::runtime_error If the file cannot be opened.
 * 
 * Reads the content of the file line by line and stores it in the logo_ member variable.
 */
void Developer::load_logo_from_file(const std::string& filepath) {
    std::ifstream file(filepath);
    if (!file) {
        throw std::runtime_error("Invalid file path: " + filepath);
    }
    std::string line;
    while (std::getline(file, line)) {
        logo_ += line + "\n";
    }
}

/**
 * @brief Gets the name of the developer.
 * @return The name of the developer.
 */
auto Developer::get_name() const -> const std::string& {
    return name_;
}

/**
 * @brief Gets the alias of the developer.
 * @return The alias of the developer.
 */
auto Developer::get_alias() const -> const std::string& {
    return alias_;
}

/**
 * @brief Gets the logo of the developer.
 * @return The logo of the developer.
 */
auto Developer::get_logo() const -> const std::string& {
    return logo_;
}

/**
 * @brief Output stream operator for Developer.
 * @param output_stream The output stream.
 * @param dev The Developer object.
 * @return The output stream.
 * 
 * Prints the name, alias, and logo of the developer to the output stream.
 */
auto operator<<(std::ostream& output_stream, const Developer& dev) -> std::ostream& {
    output_stream << "Name: " << dev.name_ << "\n";
    output_stream << "Alias: " << dev.alias_ << "\n";
    if (!dev.logo_.empty()) {
       output_stream << dev.logo_;
    }
    return output_stream;
} 