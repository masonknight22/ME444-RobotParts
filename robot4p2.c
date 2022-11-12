

task main()
{
    untilBump(bumpSwitch);
    startMotor(rightMotor, 63);
    wait(5);
    stopMotor(rightMotor);
}