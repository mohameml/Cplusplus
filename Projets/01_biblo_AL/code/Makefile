all : run 

compile : 
	g++ -c ./src/Dvector.cpp ./bin/Dvector.o
	g++ -c ./src/main.cpp ./bin/main.o
	g++ -o ./bin/*.o

run : compile
	./bin/main 

clean :
	rm -r ./bin/* 



# # Nom de l'exécutable
# TARGET = main

# # Répertoires
# SRC_DIR = src
# OBJ_DIR = bin

# # Sources et objets
# SRC = $(wildcard $(SRC_DIR)/*.cpp)
# OBJ = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SRC))

# # Règle par défaut
# all: $(TARGET)

# # Création de l'exécutable
# $(TARGET): $(OBJ)
#     g++ -o $@ $^

# # Création des fichiers objets
# $(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
#     g++ -c $< -o $@

# # Nettoyage des fichiers générés
# clean:
#     rm -f $(OBJ) $(TARGET)
