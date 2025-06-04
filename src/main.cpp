#include "../include/developer.hpp"
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"

#include <iostream>
#include <memory>
#include <vector>

auto main() -> int {
    // Holds shared ownership of Developer objects (polymorph)
    std::vector<std::shared_ptr<Developer>> developers; 
    
    auto senior = std::make_shared<SeniorDeveloper>("Walter White", "Heisenberg");
    auto junior = std::make_shared<JuniorDeveloper>("Carl Johnson", "CJ");

    // Load ASCII logos from files
    senior->load_logo_from_file("../../resources/senior_logo.txt");
    junior->load_logo_from_file("../../resources/junior_logo.txt");

    developers.push_back(senior);
    developers.push_back(junior);

    for (const auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
    }

    return 0;
}