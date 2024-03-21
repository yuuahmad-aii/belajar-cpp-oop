all: main.exe

main.exe:
	g++ -o main.exe main.cpp mahasiswa.cpp mahasiswa.h bentukGeometri.cpp bentukGeometri.h

clean:
	rm main.exe