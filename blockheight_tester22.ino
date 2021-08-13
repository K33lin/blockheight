#include <watchy.h> //include the Watchy library
#include <Fonts/FreeMonoOblique24pt7b.h> //include any fonts you want to use

class MyFirstWatchFace : public Watchy{ //inherit and extend Watchy class
    public:
        void drawWatchFace(){ //override this method to customize how the watch face looks
          display.setFullWindow();
          display.setTextColor(GxEPD_BLACK);
          display.fillScreen(GxEPD_WHITE);
          String height;
          height = getHeightData();
          display.setFont(&FreeMonoOblique24pt7b);
          display.setCursor(25, 110);
          display.print(height);
          display.display(true);
        }
};

MyFirstWatchFace m; //instantiate your watchface

void setup() {
  m.init(); //call init in setup
}

void loop() {
  // this should never run, Watchy deep sleeps after init();
}
