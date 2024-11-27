//------------------------------------------------
// MAX7219_7Seg.h - Header File
// Library for Displaying Numbers & Chracters on
// MAX7219 8-Digit 7-Segment Display

//------------------------------------------------
//header guards
#ifndef MAX7219_7Seg_h
#define MAX7219_7Seg_h
//--------------------------------------------------------
//class definition
class MAX7219_7Seg
{
    public:
        //constructor
        MAX7219_7Seg(int DIN, int CS, int CLK);
        //methods
        void Initialize(byte brightLevel);
        void Clear();
        void Number(byte digit, byte n);
        void Numberdp(byte digit, byte n);
        void Char(byte digit, char c);
    private:
        int _DIN;
        int _CS;
        int _CLK;
        void Write(byte cmd, byte data);
        void SPI_send(byte data);
};
//--------------------------------------------------------
#endif