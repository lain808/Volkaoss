// THE VOLKASSILATOR PROJECT
//
// Specific Kaossilator pro defines
//
// - Allow to play MIDI notes with the Kaossilator pro synth
// - Allow to map Volcal Sample parts 1-10 to a GM standard rythm channel 10
// Franck Touanen - Nov 2016.

// ====================================================================
// VK INTERNAL DEFINES
// ====================================================================

#define VKINTERNAL_SIGNATURE "VK"
#define VKINTERNAL_VERSION "0.00"
#define VKINTERNAL_MIDI_IN 16

#define VKINTERNAL_CMD_MODE_KEY         12 // Command mode C0
#define VKINTERNAL_CMD_SAVE             VKINTERNAL_CMD_MODE_KEY+2 
#define VKINTERNAL_CMD_INIT             VKINTERNAL_CMD_MODE_KEY+4

// Settings structure. Used to store parameters in the EEPROM of the Arduino. 512 bytes max.

struct VKSettingsTemplate {
char sign[3];
char ver[5];
byte vkMidiIn;
byte kaossMidiIn;
byte kaossMidiOut;
byte kaossNoteTranspose;
byte kaossYPad;
int  vSampleccMidiInState;
} VKGlobals, VKeeGlobals;
int           eeAddress = 0;

byte    vkMidiIn=VKINTERNAL_MIDI_IN;
bool vkCommandModeKeyPressed=false;


