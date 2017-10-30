# Run valgrind (+callgrind) on a program + Output an image file with dot (+gprof2dot)
# Require valgrind, callgrind, graphviz, gprof2dot

set -e

PROF_DUMP_FILE=`mktemp`
PROF_OUTPUT_FILE=`mktemp`.svg

valgrind --tool=callgrind --callgrind-out-file="$PROF_DUMP_FILE" -- "$@"
gprof2dot -z main -n 0.01 -e 0.01 -f callgrind "$PROF_DUMP_FILE" | dot -Tsvg -o "$PROF_OUTPUT_FILE"

echo "## Output file: $PROF_OUTPUT_FILE"
