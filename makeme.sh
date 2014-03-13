cd ./AKorezin/spring/
i=0
for path in task*; do
	if [ -e "$path" ]
	then
		cd "$path"
		sh ./run.sh
		i=$((i+$?))
		cd ..
	else
		echo "nothing happend"
		exit 1
	fi
done
exit "$i"

