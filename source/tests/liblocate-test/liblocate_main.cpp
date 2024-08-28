
#include <gmock/gmock.h>

#include "monolithic_examples.h"

#if defined(BUILD_MONOLITHIC)
#define main liblocate_test_main
#endif

extern "C"
int main(int argc, const char ** argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}
