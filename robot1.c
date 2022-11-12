

task main()
{
    setServo(servoMotor, -127);
    wait(2);
    setServo(servoMotor, 0);
    wait(2);
    setServo(servoMotor, 127);
    wait (2)
}