void returnhome(X_pos,Y_pos,direction){
       if(direction == true){   //Turn towards the base
         turnRobot (50, 90);
       }
       else if (direction == false){ 
         turnRobot (50, -90);
       }

      DistanceSensor.setPosition(0,turns);  // Moves forward the base
       MotoRight.spin(forward);
       MotorLeft.spin(forward);
      while(DistanceSensor.position(turns) < X_pos*2){}
      MotoRight.spin(stop);
      MotorLeft.spin(stop);

      turnRobot (50, 90); // Turns to the home base

      DistanceSensor.setPosition(0,turns);    // To reach the home base
       MotoRight.spin(forward);
       MotorLeft.spin(forward);
      while(DistanceSensor.position(turns) < Y_pos*2){}
      MotoRight.spin(stop);
      MotorLeft.spin(stop);

}
