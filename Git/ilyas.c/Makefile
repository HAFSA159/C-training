run:
	@gcc DDE.c  -o out1 && ./out1
	@gcc CODE.c -o out2 && ./out2

push:
	@git add --all
	@git commit -m "newagain"
	@git pull --rebase
	@git push

