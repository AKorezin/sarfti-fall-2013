cd ./AKorezin/spring/
#find . -type d -name "task*" | while read path
#do
#	cd $path
#	make
#	./app*
#	make clean
#	cd ..
#done

for path in task*; do
	if [ -e "$path" ]
	then
		echo "$path"
	else
		echo "nothing"
		exit 0
	fi
done
exit 0

