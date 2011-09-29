SRCDIR = src
OBJDIR = obj
INCDIR = include
BINDIR = bin
CXXFLAGS += -I $(INCDIR)


#all: $(BINDIR)/testTDMS


_DEPS = Channel.h DataArray.h DataType.h DataValue.h Error.h Group.h LeadIn.h MetaData.h Object.h ObjectDefaults.h Root.h TDMSData.h TDMSReader.h
DEPS = $(patsubst %,$(INCDIR)/%,$(_DEPS))

_SRC = Channel.cpp DataArray.cpp DataType.cpp DataValue.cpp Error.cpp Group.cpp LeadIn.cpp MetaData.cpp Object.cpp ObjectDefaults.cpp Root.cpp TDMSData.cpp TDMSReader.cpp testTDMS.cpp
_OBJ = $(_SRC:.cpp=.o)
OBJ = $(patsubst %,$(OBJDIR)/%,$(_OBJ))



$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(DEPS)
	$(CXX) -c -o $@ $< $(CXXFLAGS)

$(BINDIR)/testTDMS: $(OBJ)
	echo $(OBJ)
	$(CXX) -o $@ $^ $(CFLAGS) $(LIBS)

.PHONY: clean

clean:
	-rm -f $(OBJDIR)/*.o *~ core $(INCDIR)/*~ 
	-rm -f $(BINDIR)/*
