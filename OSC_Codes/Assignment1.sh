echo "Enter The First Number:";
read fnum;
echo "Enter The Second Number:";
read fnum2;
sum=`expr $fnum + $fnum2`
echo "Sum = $sum"
div=`expr $fnum / $fnum2`
echo "Div = $div"
sub=`expr $fnum - $fnum2`
echo "Sub = $sub"
mul=`expr $fnum \* $fnum2`
echo "Multiplication = $mul"