import os
from PIL import Image

def get_path(files: list):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCur, *files)

path = ["file", "van_tay.png"]
path = get_path(path)
image = Image.open(path).convert("RGBA")

width, height = image.size

new_image = Image.new("RGBA", (width, height), (255, 255, 255, 255))

for x in range(width):
  for y in range(height):
    r, g, b, a = image.getpixel((x, y))
    
    if (r, g, b) != (0, 0, 0) and a != 0:
      new_image.putpixel((x, y), (255, 0, 0, a))

path = get_path(["file", "van_tay_red.png"])
new_image.save(path)

os.system("cls")
print("Build done.")