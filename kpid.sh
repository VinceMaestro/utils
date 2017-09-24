# if [ "$#" != 1 ]; then
nbr_arg="$#"
if [ "$nbr_arg" == 0 ]; then
	read -p 'quels pIDs ? - ' pIDs;
else
	pIDs="$@"
fi
echo "$pIDs"
echo "Ending ... ";
kill -s HUP $pIDs;
status="$?"
echo "Exit Status : $status";
if [ "$status" = 0 ]; then
	echo "Done";
else
	echo "Ending process fail"
fi
