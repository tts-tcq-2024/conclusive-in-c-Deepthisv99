typedef void (*AlertFunc)(BreachType breachType);

void checkAndAlert(AlertTarget alertTarget, BatteryCharacter batteryChar, double temperatureInC) {
    BreachType breachType = classifyTemperatureBreach(batteryChar.coolingType, temperatureInC);
    
    AlertFunc alertFuncs[] = {sendToController, sendToEmail};
    alertFuncs[alertTarget](breachType);
}
