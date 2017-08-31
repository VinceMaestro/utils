# read -p 'Entrez votre login : ' login;
# read -p 'Interval entre 2 mesures: ' tmp;
# for i in `seq 1 36000` ; do who | grep -v $login; ps -ax | grep ssh | grep -v "grep ssh" ; sleep $tmp ;done ;

for i in `seq 1 36000` ; do who | grep -v $USER; ps -ax | grep ssh | grep -v "grep ssh" ; sleep 1 ;done ;
