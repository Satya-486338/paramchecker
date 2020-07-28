#include "paramchecker.h"
#include <gtest/gtest.h>
 
TEST(VitalsTest, BPM) { 
    ASSERT_EQ(true, vitalsRespAreOk(100,40,20));
}
 
TEST(VitalsTest, SPO2) {
    ASSERT_EQ(false, vitalsRespAreOk(100,40,50));
}
 
int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
