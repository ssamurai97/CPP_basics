file(REMOVE_RECURSE
  "libMESSAGE.pdb"
  "libMESSAGE.dylib"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/task-shared.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
