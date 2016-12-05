CXX = clang++
CXXFLAGS = -g -Wall -Wextra -Werror -pedantic -std=c++11 -Iinclude

TCOLOR=\033[1;32m
STCOLOR=\033[0;33m
NOCOLOR=\033[0m


EX1_BIN = ex1-1 ex1-2 ex1-3
EX1-1_SRC = src/ex1/eau-total.cc
EX1-2_SRC = src/ex1/eau-moyen.cc
EX1-3_SRC = src/ex1/eau-max.cc

ex1-1:
	$(CXX) $(CXXFLAGS) -o $@ $(EX1-1_SRC)

ex1-2:
	$(CXX) $(CXXFLAGS) -o $@ $(EX1-2_SRC)
	
ex1-3:
	$(CXX) $(CXXFLAGS) -o $@ $(EX1-3_SRC)

ex1: $(EX1_BIN)
	@echo -e "$(TCOLOR)Runing bin files for $@$(NOCOLOR)"
	@for file in $(EX1_BIN); do \
		echo -e "$(STCOLOR)$$file$(NOCOLOR)"; \
		./$$file; \
	done
