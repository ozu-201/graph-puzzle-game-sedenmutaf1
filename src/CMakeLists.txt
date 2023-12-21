cmake_minimum_required(VERSION 3.23)
project(graph-puzzle-game-sedenmutaf1)

set(CMAKE_CXX_STANDARD 17)

add_executable(TestLinkedList List/Node.cpp List/Node.h List/LinkedList.cpp List/LinkedList.h ../Test/LinkedListTest.cpp List/DoublyNode.cpp List/DoublyNode.h List/DoublyLinkedList.cpp List/DoublyLinkedList.h Array/Element.cpp Array/Element.h Array/Stack.cpp Array/Stack.h List/Stack.cpp List/Stack.h)
add_executable(MathematicalExpression Array/MathematicalExpression/TokenType.h Array/MathematicalExpression/Token.cpp Array/MathematicalExpression/Token.h Array/MathematicalExpression/Element.h Array/MathematicalExpression/Element.cpp Array/MathematicalExpression/Stack.h Array/MathematicalExpression/Stack.cpp Array/MathematicalExpression/Evaluate.cpp)
add_executable(Polynomial List/Polynomial/TestPolynomial.cpp List/Polynomial/Term.cpp List/Polynomial/Term.h List/Polynomial/TermNode.cpp List/Polynomial/TermNode.h List/Polynomial/Polynomial.cpp List/Polynomial/Polynomial.h)
add_executable(DartsGame Array/DartsGame/Element.cpp Array/DartsGame/Element.h Array/DartsGame/Queue.cpp Array/DartsGame/Queue.h Array/DartsGame/Test.cpp Array/DartsGame/State.cpp Array/DartsGame/State.h ../Queue.cpp ../Queue.cpp)
add_executable(Seden ../Queue.cpp ../Path.cpp ../Graph.cpp ../Graph.h ../EdgeList.cpp ../Edge.cpp ../AbstractGraph.cpp ../DisjointSet.cpp ../Heap.cpp ../HeapNode.cpp ../MinHeap.cpp ../Node.cpp ../Set.cpp ../main.cpp ../main.h)