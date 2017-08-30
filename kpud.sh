read -p 'quels PIDs ? - ' PIDs;
echo "\nEnding ... \n";
kill -s HUP $PIDs;
echo "Done\n";
