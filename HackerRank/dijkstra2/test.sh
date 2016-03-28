cat input.txt | python3 dijkstra.py >> out.txt
diff out.txt output.txt
sleep 2  #diff runs on its own thread. I could do this a safer way, but
	 #I've already finished the program and will not be reusing this script
rm out.txt
