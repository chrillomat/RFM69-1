#include <stdio.h>
#include <RFM69.h>

RFM69 radio;

int main()
{
    printf("Starting demo...\n");
    if(!radio.initialize(RF69_433MHZ,0,0xD4))
      printf("error: could not initialize SPI\n");
    else
      printf("SPI init OK\n");
    printf("done\n");
    return 0;
}
