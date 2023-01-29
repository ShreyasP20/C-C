echo "Enter the Limit:"
read n

f0=1
f1=1 
echo $f0
echo $f1
f2=0
for((i=2;i<=$n;i++))
do  
    f2=`expr $f0 + $f1`
    echo $f2
    
    f0=$f1
    f1=$f2
done 