#include "../include/developer.hpp"
#include "../include/junior_developer.hpp"
#include "../include/senior_developer.hpp"
#include <gtest/gtest.h>
#include <fstream>

// Test fixture for Developer-related tests
class DeveloperTest : public ::testing::Test {
protected:
    JuniorDeveloper* juniorDev;
    SeniorDeveloper* seniorDev;
    const std::string logo_file_path = "test_logo.txt";

    void SetUp() override {
        juniorDev = new JuniorDeveloper("Peter Parker", "Spiderman");
        seniorDev = new SeniorDeveloper("Diana Prince", "Wonder Woman");

        // Create mock logo file
        std::ofstream outfile(logo_file_path);
        outfile << "Test Logo";
        outfile.close();
    }

    void TearDown() override {
        delete juniorDev;
        delete seniorDev;
        std::remove(logo_file_path.c_str());
    }
};

TEST_F(DeveloperTest, ConstructorAndGetters) {
    EXPECT_EQ(juniorDev->get_name(), "Peter Parker");
    EXPECT_EQ(juniorDev->get_alias(), "Spiderman");

    EXPECT_EQ(seniorDev->get_name(), "Diana Prince");
    EXPECT_EQ(seniorDev->get_alias(), "Wonder Woman");
}

TEST_F(DeveloperTest, LoadLogoFromFile) {
    EXPECT_EQ(juniorDev->get_logo(), "");

    juniorDev->load_logo_from_file(logo_file_path);
    EXPECT_EQ(juniorDev->get_logo(), "Test Logo\n");

    EXPECT_THROW(juniorDev->load_logo_from_file("invalid_path.txt"), std::runtime_error);
}

// Entry point for running all tests
auto main(int argc, char **argv) -> int {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
