#include <gtest/gtest.h>
#include "lib.h"

TEST (VersionTest,check_version){
    ASSERT_GT(version(),0);
}