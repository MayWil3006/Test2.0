#ifndef DEVELOPER_HPP_k6Sknix0TE
#define DEVELOPER_HPP_k6Sknix0TE

#include <fstream>
#include <iostream>
#include <stdexcept>
#include <string>

class Developer {
public:
    Developer(const std::string& name, const std::string& alias);
    virtual ~Developer() = default;

    static void drink_coffee();

    // Loads logo content from a file into the logo_ member variable
    void load_logo_from_file(const std::string& filepath);

    auto get_name() const -> const std::string&;
    auto get_alias() const -> const std::string&;
    auto get_logo() const -> const std::string&;

    // Must be implemented by any derived class
    virtual void solve_problem() const = 0;

    // Allows direct output of Developer object via stream (e.g. std::cout << dev)
    friend auto operator<<(std::ostream& output_stream, const Developer& dev) -> std::ostream&;

private:
    std::string name_;
    std::string alias_;
    std::string logo_;
};

#endif // DEVELOPER_HPP_k6Sknix0TE