# Project Journal – Automatic Water Level Motor Shut-Off System

**Project Name:** Automatic Water Level Motor Shut-Off System
Main Controller: Arduino UNO
**Programming App:** ArduinoDroid (Android phone)
Project Type: Hardware and Arduino Project

---

## Step 1 – Project Planning

Time Spent: 1.7 Hour

I started by planning my project and deciding what I wanted to make. My idea was to build an automatic water level motor shut-off system that could help prevent water from overflowing from a container.

I planned to use an Arduino UNO as the main controller. A sensor would detect the required water level and send input to the Arduino. The Arduino would then control a relay module to switch the motor on or off according to the programmed condition.

I also thought about the main features, collected a list of the required components, and made a rough sketch in my notebook to understand how the parts could be arranged.

### Main Features

- Detect the required water level using a suitable sensor.
- Control a motor or water pump automatically.
- Switch off the motor when the set water level is reached.
- Use an Arduino UNO and relay module.
- Keep the design simple and affordable.

### Components Planned

1. Arduino UNO
2. Sensor
3. Lithium-ion battery
4. Connecting wires
5. Relay module
6. Switch
7. DC motor or water pump

Photos

I attached photos of my handwritten project overview, component list, and rough sketch. These helped me keep a record of my initial plan.

Result: The basic project idea and component list were prepared.
<img width="1600" height="720" alt="1000034698" src="https://github.com/user-attachments/assets/dd7d602e-d110-4608-a9a0-f0dd948ada01" />
<img width="720" height="1600" alt="1000034695" src="https://github.com/user-attachments/assets/3b42084a-e6c7-469a-882d-a8ce5a6518b2" />


---

## Step 2 – Component Collection

Time Spent: 1.5 Hour

After completing the planning, I started collecting the components needed for the project. I arranged the parts together and checked what I had available for building the circuit.

The main components included the Arduino UNO, sensor, relay module, lithium-ion battery, connecting wires, switch, and motor. I planned to use these parts to make the control circuit.

I also needed to make sure that the components were suitable for working together before connecting the power supply and motor.

Photos

### I planned to include photos of the collected components, including the Arduino UNO, sensor, relay module, battery, switch, connecting wires, and motor.

Result: The component collection stage was completed, and the parts were ready for the next stage.
<img width="3264" height="1472" alt="1000034634" src="https://github.com/user-attachments/assets/3d5b8f9e-26a5-4739-aeb4-24a5a6c6d016" />
<img width="3264" height="1472" alt="1000034639" src="https://github.com/user-attachments/assets/71ec9958-9741-4fba-9442-fed76f4285bd" />
<img width="468" height="1040" alt="1000034590" src="https://github.com/user-attachments/assets/d8ebb2d7-c476-42b0-ab0c-f83a8573d8dc" />
<img width="3264" height="1472" alt="1000034638" src="https://github.com/user-attachments/assets/b983824c-63b0-4c84-a690-03adddbbd993" />
<img width="3264" height="1472" alt="1000034637" src="https://github.com/user-attachments/assets/24f636ee-cb90-4b00-8cb6-1123f85c62cd" />
<img width="468" height="1040" alt="1000034593" src="https://github.com/user-attachments/assets/f54348e0-7eef-40d6-9f49-bebbcac49703" />
<img width="1280" height="960" alt="1000034818" src="https://github.com/user-attachments/assets/fcbd3e68-60d6-4f9d-9839-51500addc936" />
<img width="1040" height="468" alt="1000034587" src="https://github.com/user-attachments/assets/b8e5af11-6974-424a-844b-429545c6f372" />
<img width="1472" height="3264" alt="1000034641" src="https://github.com/user-attachments/assets/b4e0b1b5-df86-449c-bb38-1a36454adf20" />
<img width="1472" height="3264" alt="1000034640" src="https://github.com/user-attachments/assets/57f12fd9-b903-42cf-9533-d98778e2d01c" />


---

## Step 3 – Arduino UNO Code Compilation

Time Spent: 2 Hour

For this step, I used my Android phone and the ArduinoDroid app to work on the Arduino code. I chose this app because it allowed me to write and compile Arduino code directly on my phone.

The code was prepared for the Arduino UNO to read the sensor input and control the relay module. The main aim was to make the motor switch off when the required water level was detected.

I checked the code in ArduinoDroid and prepared it for the wiring and testing stage.

Photos

- Arduino code opened in ArduinoDroid.
- Compilation result shown in the app.

Result: The code preparation stage was completed. The compilation result and actual behaviour would be checked against the final circuit.
<img width="1472" height="3264" alt="1000034632" src="https://github.com/user-attachments/assets/88d23fcb-6145-4bce-be39-a83d124907c1" />
<img width="576" height="1280" alt="1000034825" src="https://github.com/user-attachments/assets/935cdb05-b7e4-45a7-a072-9b5ac9b48c6a" />


---

## Step 4 – Wiring and Project Assembly

Time Spent: 2.5 Hours

In this step, I worked on connecting the components according to my project plan. I arranged the Arduino UNO, sensor, relay module, switch, battery, and motor, and used connecting wires to assemble the circuit.

After making the connections, I checked the arrangement and tried to keep the components organized so that the circuit would be easier to inspect and test.

The planned control flow was:

*Sensor → Arduino UNO → Relay Module → Motor*

The power supply would be connected according to the requirements of the circuit. I needed to check the connections carefully before powering the motor.
<img width="269" height="194" alt="1000034833" src="https://github.com/user-attachments/assets/cc0aee7b-b625-4a5c-bc6d-b4ab5fc97870" />
<img width="726" height="606" alt="1000034830" src="https://github.com/user-attachments/assets/d07b902d-e32b-427f-8b28-fd681ee75ddc" />
<img width="883" height="640" alt="1000034836" src="https://github.com/user-attachments/assets/32c1f7da-b281-4171-b23d-e2f70c02a0ea" />
<img width="702" height="867" alt="1000034839" src="https://github.com/user-attachments/assets/2fbf357f-b3b5-4367-9718-ae1fe98a5e9e" />
<img width="568" height="674" alt="1000034827" src="https://github.com/user-attachments/assets/0766ed0e-c3f3-4ffc-ac91-415c54c8d5f4" />


---

## Step 5 – GitHub Repository and Documentation

Time Spent: 2 hour 

After working on the hardware, I started organizing the project files for GitHub and Hack Club Forge. I wanted the repository to contain the project information, Arduino code, component list, journal, and photos so that the progress would be easy to understand.

### I planned the repository structure and prepared the following files and folders:

- "README.md" – Project overview, features, and progress.
- "JOURNAL.md" – Record of the project stages and time spent.
- "BOM.csv" – List of components used in the project.
- ".gitignore" – Rules for ignoring unnecessary temporary files.
- "src/" – Arduino source code.
- "docs/" – Rough sketch and wiring documentation.

I also organized my handwritten planning photos so they could be included as evidence of the work.

The repository would help me keep the code, documentation, and project photos in one place. I planned to update it as I tested the circuit and made any necessary changes.
<img width="720" height="1600" alt="1000034842" src="https://github.com/user-attachments/assets/7ee62ef5-620e-4de7-a0b1-11550d5170b6" />


---

## Final Project Status

time Spent: 0.2 hours

The project idea was planned, the components were collected, Arduino code was prepared using ArduinoDroid, and the wiring and assembly stage was carried out. The project documentation was also organized for GitHub.

The remaining important task was to verify the sensor readings and test the automatic motor shut-off function. After successful testing, I could add the final photos and update the repository before submitting the project to Hack Club Forge.
<img width="1600" height="720" alt="1000034703" src="https://github.com/user-attachments/assets/c1b53234-fc54-47ec-b15d-4e39f13557df" />
