for i in `seq 1 36000` ; do; leaks fillit ;done ;

lldb ./fillit test2.txt
b ft_fctwhocouldleek
run

n pour next, b pour bkpt
display pour afficher une var a tout les tours 

q
