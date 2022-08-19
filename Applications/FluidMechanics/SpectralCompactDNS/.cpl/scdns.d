LOADLIBES+=-lm

scdns : .cpl/scdns.o /home/luchini/fri/complex.o /home/luchini/fri/fft.o  /home/luchini/fri/rbmat.o  .cpl/convolutions.o .cpl/linsolve.o
	$(CC) $(LDFLAGS) -o scdns .cpl/scdns.o /home/luchini/fri/complex.o /home/luchini/fri/fft.o  /home/luchini/fri/rbmat.o  .cpl/convolutions.o .cpl/linsolve.o $(LOADLIBES) $(LDLIBS)

.cpl/scdns.c .cpl/scdns.d : scdns.cpl /home/luchini/fri/complex.cpl /home/luchini/fri/fft.cpl /home/luchini/fri/fft.cmn /home/luchini/fri/rbmat.cpl /home/luchini/fri/matrix.cmn convolutions.cpl linsolve.cpl