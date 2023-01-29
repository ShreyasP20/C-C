echo "Enter The Factorial Number:"
read Fact
f2=1
for((i=1;i<=$Fact;i++))
do
    f2=`expr $f2 \* $i`
done
echo "Factorial:$f2"