#include "../include/developer.hpp"
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"
#include <gtest/gtest.h>
#include <fstream>

/**
 * @brief Test Fixture for Developer related tests.
 */
class DeveloperTest : public ::testing::Test {
protected:
    JuniorDeveloper* juniorDev; ///< Pointer to a JuniorDeveloper object
    SeniorDeveloper* seniorDev; ///< Pointer to a SeniorDeveloper object
    const std::string logo_file_path = "test_logo.txt"; ///< Path to the test logo file

    /**
     * @brief Sets up the test environment.
     * Creates instances of JuniorDeveloper and SeniorDeveloper.
     * Creates a test logo file.
     */
    void SetUp() override {
        juniorDev = new JuniorDeveloper("Peter Parker", "Spiderman");
        seniorDev = new SeniorDeveloper("Diana Prince", "Wonder Woman");
        
        // Create a mock logo file for testing
        std::ofstream outfile(logo_file_path);
        outfile << "Test Logo";
        outfile.close();
    }

    /**
     * @brief Tears down the test environment.
     * Deletes the instances of JuniorDeveloper and SeniorDeveloper.
     * Removes the test logo file.
     */
    void TearDown() override {
        delete juniorDev;
        delete seniorDev;

        // Remove the mock logo file
        remove(logo_file_path.c_str());
    }
};
/**
 * @brief Tests the constructor and getter methods of JuniorDeveloper and SeniorDeveloper.
 */
TEST_F(DeveloperTest, ConstructorAndGetters) {
    EXPECT_EQ(juniorDev->get_name(), "Peter Parker");
    EXPECT_EQ(juniorDev->get_alias(), "Spiderman");

    EXPECT_EQ(seniorDev->get_name(), "Diana Prince");
    EXPECT_EQ(seniorDev->get_alias(), "Wonder Woman");
}

/**
 * @brief Tests the load_logo_from_file method of JuniorDeveloper.
 * Checks if the logo is correctly loaded from the file and verifies that an exception is thrown for an invalid file path.
 */
TEST_F(DeveloperTest, LoadLogoFromFile) {
    EXPECT_EQ(juniorDev->get_logo(), "");

    juniorDev->load_logo_from_file(logo_file_path);
    EXPECT_NE(juniorDev->get_logo(), "");
    EXPECT_EQ(juniorDev->get_logo(), "Test Logo\n");

    EXPECT_THROW(juniorDev->load_logo_from_file("invalid_path.txt"), std::runtime_error);
}

/**
 * @brief Main function for running all the tests.
 * @param argc Argument count
 * @param argv Argument vector
 * @return Result of running all tests
 */
auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}