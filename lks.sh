nbr_arg="$#"
if [ "$nbr_arg" == 0 ]; then
	read -p 'What is the exe name ? - ' exe;
else
	exe="$@"
fi
for i in `seq 1 36000`
do
	leaks `pgrep $exe`
done
