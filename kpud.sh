read -p 'quels PIDs ? - ' PIDs;
echo "Ending ... ";
kill -s HUP $PIDs;
status="$?"
echo "Exit Status : $status";
if [ "$status" = 0 ]; then
	echo "Done";
else
	echo "Ending process fail"
fi
