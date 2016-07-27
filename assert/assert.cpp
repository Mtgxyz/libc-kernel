#include <assert.h>
#include <base.hpp>
#include <text_DISP.hpp>
void "C" __assert(const char *msg, const char *file, int line, int res) {
    if(!res) {
        MTGosHAL::err << "assert(" << msg << ") failed in " << file << " at line " << line << "!\n";
        MTGosHAL::err << "Kernel panic.\n";
        for(;;);
    }
    assert(0);
}