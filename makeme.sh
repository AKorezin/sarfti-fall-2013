cd ./AKorezin/spring/
for path in ./task*
do
	cd $path
	make
	./app*
	make clean
	cd ..
done
