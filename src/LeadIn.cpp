#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

#include "LeadIn.h"
#include "Error.h"

LeadIn::LeadIn(std::ifstream &infile) : infile(infile) {
    checkTDMSString();
    parseTOCMask();
    readVersionNumber();
    readNextSegmentOffset();
    readDataOffset();
}

void LeadIn::checkTDMSString() {
    char buffer[4];
    infile.read(buffer,4);
    if (infile.eof()) throw EOFError();
    std::string tdmsString(buffer,4);
    if (tdmsString != "TDSm") {
        std::stringstream message;
        message << "Invalid header tag: '" << tdmsString
                << "' from file; should be 'TDSm'";
        throw IOError(message.str());
    }
}

void LeadIn::parseTOCMask() {
    unsigned int tocMask = 0;
    infile.read((char*)&tocMask,4);
    flagHasMetaData   = ((tocMask &   2) != 0);
    flagHasObjectList = ((tocMask &   4) != 0);
    flagHasRawData    = ((tocMask &   8) != 0);
    flagIsInterleaved = ((tocMask &  32) != 0);
    flagIsBigEndian   = ((tocMask &  64) != 0);
    flagHasDAQmxData  = ((tocMask & 128) != 0);
}

void LeadIn::readVersionNumber() {
    infile.read((char*)&versionNumber,4);
}

void LeadIn::readNextSegmentOffset() {
    infile.read((char*)&nextSegmentOffset,8);
}

void LeadIn::readDataOffset() {
    infile.read((char*)&dataOffset,8);
}

void LeadIn::print() const {
    std::cout << "\nRead lead-in data" << std::endl;
    std::cout << "  hasMetaData:         " << flagHasMetaData << std::endl;
    std::cout << "  hasObjectList:       " << flagHasObjectList << std::endl;
    std::cout << "  hasRawDat:           " << flagHasRawData << std::endl;
    std::cout << "  isInterleaved:       " << flagIsInterleaved << std::endl;
    std::cout << "  isBigEndian:         " << flagIsBigEndian << std::endl;
    std::cout << "  hasDAQmsData:        " << flagHasDAQmxData << std::endl;
    std::cout << "  Version number:      "<< versionNumber << std::endl;
    std::cout << "  Next segment offset: "<< nextSegmentOffset << std::endl;
    std::cout << "  Data offset:         "<< dataOffset << std::endl;
}

bool LeadIn::hasMetaData() const {
    return flagHasMetaData;
}

bool LeadIn::hasRawData() const {
    return flagHasRawData;
}


