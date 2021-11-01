file(REMOVE_RECURSE
  "../bin/foo"
  "../bin/foo.pdb"
  "CMakeFiles/foo.dir/src/main.c.o"
)

# Per-language clean rules from dependency scanning.
foreach(lang C)
  include(CMakeFiles/foo.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
