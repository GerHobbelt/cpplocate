
#pragma once

#if defined(BUILD_MONOLITHIC)

#ifdef __cplusplus
extern "C" {
#endif

int liblocate_test_main(int argc, const char** argv);
int cpplocate_test_main(int argc, const char** argv);

#ifdef __cplusplus
}
#endif

#endif
