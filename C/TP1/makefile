sources = gui_simple.cpp
objets = $(sources:.cpp=.o)

Gui_Simple : $(objets)
	g++ $^ -o $@ -lQtGui -lQtCore

gui_simple.o : gui_simple.cpp
	g++ -c $^ -I/usr/include/qt4/QtGui/ -I/usr/include/qt4/

clean :
	rm -f *~ *.o

mrproper : clean
	rm -f Gui_Simple
