
SRCDIR = src
INCDIR = include
BINDIR = bin
CXXFLAGS += -I$(INCDIR)

SRC = $(SRCDIR)/Channel.cpp $(SRCDIR)/DataArray.cpp $(SRCDIR)/DataType.cpp $(SRCDIR)/DataValue.cpp $(SRCDIR)/Error.cpp $(SRCDIR)/Group.cpp $(SRCDIR)/LeadIn.cpp $(SRCDIR)/MetaData.cpp $(SRCDIR)/Object.cpp $(SRCDIR)/ObjectDefaults.cpp $(SRCDIR)/Root.cpp $(SRCDIR)/TDMSData.cpp $(SRCDIR)/TDMSReader.cpp $(SRCDIR)/testTDMS.cpp

OBJ = $(SRC:.cpp=.o)


$(BINDIR)/testTDMS: $(OBJ)
	$(CXX) -o $(BINDIR)/testTDMS $(OBJ)

clean:
	- rm $(BINDIR)/testTDMS
