#include "Identify.h"
#include "GateDevice.h"
#include "Mediator.h"
#include "IdentifyInterface.h"
#include "GateDeviceInterface.h"
#include "def.h"

int main(int argc, char* argv[])
{
    std::shared_ptr<Identify> identify = make_shared<Identify>();
    std::shared_ptr<GateDevice> gate = make_shared<GateDevice>();
    std::shared_ptr<Mediator> mediator = make_shared<Mediator>(gate, identify);
    identify->identifySuccessfully("string", "string");
    return 0;
}