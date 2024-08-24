# Règle par défaut, qui exécutera la cible "run"
all: run

# Compilation des fichiers .cpp en fichiers objets dans ./bin
compile: ./bin/MathOp.o ./bin/Main.o
	g++ ./bin/MathOp.o ./bin/Main.o -o ./bin/main

# Compilation du fichier MathOp.cpp en MathOp.o
./bin/MathOp.o: ./sources/MathOp.cpp
	g++ -c ./sources/MathOp.cpp -o ./bin/MathOp.o

# Compilation du fichier Main.cpp en Main.o
./bin/Main.o: Main.cpp
	g++ -c Main.cpp -o ./bin/Main.o

# Exécution de l'exécutable
run: compile
	./bin/main

# Nettoyage du dossier ./bin
clean:
	rm -r ./bin/*
