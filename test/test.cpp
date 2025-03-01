
#include "/usr/local/include/tachyon_stl.h"
    
int main(){
tachyon_stl_setup();
(*tachyon_internal::decode_func(println))({1.28247467873076837});
(*tachyon_internal::decode_func(println))({0.588002603547567504});

tachyon_internal::free_all();
return 0;
}