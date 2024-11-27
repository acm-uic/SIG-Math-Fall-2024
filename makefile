# Compile using Luke's Testing file
luke:
	g++ -Wall Testing/luke.cpp Parser/Expression.cpp Parser/InputParser.cpp Parser/Value.cpp -o luke.out
