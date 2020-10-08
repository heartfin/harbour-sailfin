!defined(SAILFIN_VERSION, var) {
    SAILFIN_VERSION = "0.0.0-unknown"
}
QMAKE_CXXFLAGS += -std=c++17

# Help, something keeps eating my quotes and backslashes
DEFINES += "SAILFIN_VERSION=\"\\\"$$SAILFIN_VERSION\\\"\""
