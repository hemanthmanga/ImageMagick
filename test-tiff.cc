#include <tiff.h>
#include <tiffio.h>

int main() {
  thandle_t image;
  TIFFClientOpen("", "rb", image, nullptr, nullptr, nullptr, nullptr, nullptr,
                 nullptr, nullptr);
  return 0;
}
