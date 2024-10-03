//
// Created by Justin Zaliaduonis on 10/3/24.
//

#ifndef RAW_IMAGE_H
#define RAW_IMAGE_H


enum Encoding {
    RGB = 1,
    YCbCr = 2,
};

enum ColorRGB {
  RED,
  GREEN,
  BLUE,
}

enum ColorYCbCr {
  Y_c,
  Pb_c,
  Pr_c,
}

class RawImage {
    public:
        RawImage(
          double** imgData, Encoding enc, size_t height, size_t width
          ): _imgData(imgData) _encoding(enc) _height(height) _width(width) {};

        void to_ycbcr();
        void to_rgb();

        void setPixel(size_t x, size_t y, Color c, double value);
        double get_pixel(size_t x, size_t y, Color c) const;

        ~RawImage();

    private:
        double** _imageData;
        Encoding _encoding;
        size_t _height, _width;
};


#endif
