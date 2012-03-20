#include "Error.h"

Error::Error(const std::string& message)
    :   message(message) {
}

IOError::IOError(const std::string& message)
    :   Error(message) {
}

EOFError::EOFError()
    :   Error("") {
}

EOFError::EOFError(const std::string& message)
    :   Error(message) {
}
