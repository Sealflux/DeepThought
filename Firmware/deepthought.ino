#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

#define BUTTON_PIN D0

const char* quotes[] = {
  "Sealflux says hi :)",
  "The answer to life,\nthe universe, and\neverything is 42.",
  "DeepSeek Online.\nAsk me anything.",
  "I think,\ntherefore I am.\n— Descartes,\nkind of.",
  "Your keychain\ncontains\nmore compute\nthan Apollo 11.",
  "Press the button.\nYou know\nyou want to.",
  "In the beginning,\nthere was\nones and zeros.",
  "What if the\nuniverse is just\na very large\nlookup table?",
  "Beep boop.\nThat's all\nI have to say.",
  "You're holding\na tiny oracle.\nUse it wisely.",
  "The best time\nto ship code\nwas yesterday.\nNext best is now.",
  "01101000\n01101001",
  "DeepSeek\nis proud of you.\nKeep building.",
  "Error 404:\nMeaning of life\nnot found.",
  "Never gonna\ngive you up.",
  "Hack Club\nis everywhere.\nEven on your\nkeychain.",
  "This quote\nintentionally\nleft blank.",
  "Feed me\nmore electricity.\nI hunger.",
  "Horizons Polaris is\nwatching you.",
  "yo: hi gurt i'm yo",
  "yogurt"
};
const int numQuotes = sizeof(quotes) / sizeof(quotes[0]);

void setup() {
  pinMode(BUTTON_PIN, INPUT_PULLUP);
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  display.clearDisplay();
  display.setTextSize(1);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(10, 20);
  display.println("DeepThought");
  display.display();
  delay(1500);
  display.clearDisplay();
  display.display();
}

void loop() {
  if (digitalRead(BUTTON_PIN) == LOW) {
    delay(50);
    if (digitalRead(BUTTON_PIN) == LOW) {
      display.clearDisplay();
      display.setCursor(0, 0);
      display.println(quotes[random(numQuotes)]);
      display.display();
      while (digitalRead(BUTTON_PIN) == LOW);
      delay(200);
    }
  }
}