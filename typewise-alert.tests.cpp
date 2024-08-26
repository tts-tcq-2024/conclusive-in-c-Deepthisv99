#include <gtest/gtest.h>
#include "typewise-alert.h"

TEST(TypeWiseAlertTestSuite, InfersTooLowBreach) {
    ASSERT_EQ(inferBreach(12, 20, 30), TOO_LOW);
}

TEST(TypeWiseAlertTestSuite, InfersTooHighBreach) {
    ASSERT_EQ(inferBreach(35, 20, 30), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, InfersNormalBreach) {
    ASSERT_EQ(inferBreach(25, 20, 30), NORMAL);
}

TEST(TypeWiseAlertTestSuite, ClassifiesPassiveCoolingBreach) {
    ASSERT_EQ(classifyTemperatureBreach(PASSIVE_COOLING, 36), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, ClassifiesHiActiveCoolingBreach) {
    ASSERT_EQ(classifyTemperatureBreach(HI_ACTIVE_COOLING, 46), TOO_HIGH);
}

TEST(TypeWiseAlertTestSuite, ClassifiesMedActiveCoolingBreach) {
    ASSERT_EQ(classifyTemperatureBreach(MED_ACTIVE_COOLING, 39), NORMAL);
}
