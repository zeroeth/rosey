ObjectiveC and NextStep libraries under linux.


Clang
-----

install clang, gnustep, and gobjc (or libobjc)

current compile:

clang|gcc `gnustep-config --objc-flags` objectivity.m `gnustep-config --base-libs` -I/usr/lib/gcc/x86_64-linux-gnu/4.7/include -L/usr/lib/gcc/x86_64-linux-gnu/4.7/

gnustep-config output for reference:

    $ gnustep-config --objc-flags
    -MMD -MP -DGNUSTEP -DGNUSTEP_BASE_LIBRARY=1 -DGNU_GUI_LIBRARY=1 -DGNU_RUNTIME=1 -DGNUSTEP_BASE_LIBRARY=1 -fno-strict-aliasing -fexceptions -fobjc-exceptions -D_NATIVE_OBJC_EXCEPTIONS -pthread -fPIC -Wall -DGSWARN -DGSDIAGNOSE -Wno-import -g -O2 -fgnu-runtime -fconstant-string-class=NSConstantString -I. -I/home/zeroeth/GNUstep/Library/Headers -I/usr/local/include/GNUstep -I/usr/include/GNUstep
    $ gnustep-config --base-libs
    -rdynamic -pthread -shared-libgcc -fexceptions -fgnu-runtime -L/home/zeroeth/GNUstep/Library/Libraries -L/usr/local/lib -L/usr/lib -lgnustep-base -lpthread -lobjc -lm
