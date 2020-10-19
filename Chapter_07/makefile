obj = main.o prn.o selection.o report.o compare.o
cfg = -std=c11 -Wall -pedantic

prs: $(obj)
	gcc $(cfg) -o prs main.o prn.o selection.o report.o compare.o

$(obj): prs.h
	gcc $(cfg) -c $*.c

clean:
	rm -rf prs $(obj)

