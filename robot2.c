

task main()
{
    startMotor(leftMotor, 63);
    startMotor(rightMotor, 63);
    untilEncoderCounts(480, quad);
    stopMotor(leftMotor);
    stopMotor(rightMotor);
}