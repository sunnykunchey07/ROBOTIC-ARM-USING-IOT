Download the Blynk app from the Google Play store or the Blynk website here: App Download ensure you download for Android as Apple doesn't allow iPhones to be connected to Arduino via bluetooth. Once the app has been downloaded, you will need to create an account. When creating an account register with a real email. Your app will be emailing you your auth token, needed to control the robot.

Follow the steps below to set up your app or watch the video here:

Click "Create New Project".

Name your project. This can be anything, I named mine "roboarm".

Click under "Choose device" where it says "ESP8266".

Scroll through until you reach Arduino Uno.

Click the OK button.

Click under "Connection Type" where it says "WiFi".

Scroll through until you reach "Bluetooth".

Click the OK button.

Click "Create Project".

Click the nut icon.

Click "email" - this will send your auth code to your email. You will need this when coding.

Click anywhere on the dotted screen a secondary screen will appear.

Choose Slider L.

Repeat the process to make three more sliders.

You should now have four sliders.

Click on your first slider.

A secondary screen will appear.

Name the slider "Base" by clicking on where it says "Slider".

Click where it says "Pin".

Select Virtual and then select V3.

Next to where it now says V3 you should see a 0, a line then a 1023 - This represents the range of the slider.

Click where it says 1023 and change it to 180 - A servo can turn 180 degrees.

Click "OK".

Name the next slider "Forward".

Set it as pin V4 and change the range to 0-180.

Click "OK".

Name the next slider "Up".

Set it as pin V5 and change the range to 0-180.

Click "OK".

Name the final slider "Claw".

Set it as pin V6 and change the range to 0-90 - the claw should only open 90 degrees to avoid breaking.

Click "OK".

Click on the dotted screen again and then scroll down on the secondary screen.

Select Bluetooth.

Once the Arduino is ready, we will need to connect the HC-05 bluetooth module to the app.

Congrats, you just made your custom app!