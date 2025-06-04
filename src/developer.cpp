#include "../include/developer.hpp"

Developer::Developer(const std::string& name, const std::string& alias)
    : name_(name), alias_(alias) {}

void Developer::drink_coffee() {
    std::cout << "Ahhhh, I needed that coffee!!!\n" << std::endl;
}

// Reads a logo from a file and stores it in logo_
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

auto Developer::get_name() const -> const std::string& {
    return name_;
}

auto Developer::get_alias() const -> const std::string& {
    return alias_;
}

auto Developer::get_logo() const -> const std::string& {
    return logo_;
}

// Prints developer information including name, alias, and logo
auto operator<<(std::ostream& output_stream, const Developer& dev) -> std::ostream& {
    output_stream << "Name: " << dev.name_ << "\n";
    output_stream << "Alias: " << dev.alias_ << "\n";
    if (!dev.logo_.empty()) {
        output_stream << dev.logo_;
    }
    return output_stream;
}