# Nome dell'eseguibile finale
TARGET = task_scheduler

# Compilatore
CXX = g++
CXXFLAGS = -std=c++11 -Wall -I./classes

# Tutti i file sorgente (puoi aggiungerne altri man mano)
SRC = main.cpp \
      classes/TaskFactory.cpp \
      classes/TaskCasa.cpp \
      classes/TaskGiardino.cpp

# Genera i file oggetto corrispondenti
OBJ = $(SRC:.cpp=.o)

# Regola principale
all: $(TARGET)

# Linka gli oggetti
$(TARGET): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Regola per compilare .o da .cpp
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

# Pulizia
clean:
	rm -f $(OBJ) $(TARGET)
