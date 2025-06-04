#include "../include/developer.hpp"
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"


#include <iostream>
#include <memory>
#include <vector>

auto main() -> int {

    // Vector to hold shared pointers to Developer objects
    std::vector<std::shared_ptr<Developer>> developers; 
    
    //Create a SeniorDeveloper
    auto senior = std::make_shared<SeniorDeveloper>("Walter White", "Heisenberg"); 
    // Create a JuniorDeveloper
    auto junior = std::make_shared<JuniorDeveloper>("Carl Johnson", "CJ"); 

    // Load logos from resources
    senior->load_logo_from_file("../../resources/senior_logo.txt");
    junior->load_logo_from_file("../../resources/junior_logo.txt");

    // Add developers to the vector
    developers.push_back(senior);
    developers.push_back(junior);

    // Iterate over each developer and solve problem
    for (const auto& dev : developers) {
        std::cout << "Solving a problem:" << std::endl;
        dev->solve_problem();
    }
    return 0;
}
