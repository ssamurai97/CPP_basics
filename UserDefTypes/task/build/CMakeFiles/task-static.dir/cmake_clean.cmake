file(REMOVE_RECURSE
  "libMESSAGE.pdb"
  "libMESSAGE.a"
)

# Per-language clean rules from dependency scanning.
foreach(lang CXX)
  include(CMakeFiles/task-static.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
