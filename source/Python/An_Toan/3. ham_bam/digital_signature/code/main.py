import os
from reportlab.lib.pagesizes import letter
from reportlab.pdfgen import canvas
from PyPDF2 import PdfWriter, PdfReader
from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import letter
from io import BytesIO
from PIL import Image, ImageDraw, ImageFont

os.system("cls")

def get_path(files: list):
  pathCur = os.path.abspath(os.path.dirname(__file__))
  return os.path.join(pathCur, *files)

def create_signature_image():
  img = Image.new('RGB', (400, 200), color=(255, 255, 255))
  # img = Image.new('RGBA', (400, 200), color=(255, 255, 255, 0)) # màu trong suốt
  d = ImageDraw.Draw(img)

  textSignature = "Quan"
  textFullName = "Nguyễn Anh Quân"
  denta = (len(textFullName) // 2) - (len(textSignature) // 2)
  denta *= 3
  
  # pathFont = get_path(["font", "AlexBrush-Regular.ttf"])
  pathFont = get_path(["font", "My Everything TRIAL.ttf"])
  font = ImageFont.truetype(pathFont, 70)
  d.text((150 + denta, 10), textSignature, font=font, fill=(0, 0, 255))

  pathFont = get_path(["font", "Roboto-Light.ttf"])
  font = ImageFont.truetype(pathFont, 20)
  d.text((150, 140), textFullName, font=font, fill=(0, 0, 0))

  fingerprint_img_path = get_path(["file", "van_tay_red.png"])
  fingerprint_img = Image.open(fingerprint_img_path)
  fingerprint_img = fingerprint_img.resize((130, 130))
  img.paste(fingerprint_img, (10, 40))

  signature_img_path = get_path(["file", "signature_img.png"])
  img.save(signature_img_path)

  return signature_img_path

def add_signature_to_pdf(input_pdf, output_pdf):
  signature_img_path  = create_signature_image()

  # Đọc PDF gốc
  pdf_writer = PdfWriter()
  pdf_reader = PdfReader(input_pdf)
  page = pdf_reader.pages[0]

  # Tạo một canvas tạm để thêm chữ ký
  packet = BytesIO()
  can = canvas.Canvas(packet, pagesize=letter)
  can.drawImage(signature_img_path, 350, 200, 200, 100)
  can.save()

  # Thêm chữ ký vào trang đầu tiên của PDF
  packet.seek(0)
  signature_pdf = PdfReader(packet)
  page.merge_page(signature_pdf.pages[0])

  # Thêm trang có chữ ký vào file mới
  pdf_writer.add_page(page)

  # Lưu file PDF mới
  with open(output_pdf, 'wb') as output_file:
    pdf_writer.write(output_file)

input = get_path(["file", "a.pdf"])
output = get_path(["file", "b.pdf"])
add_signature_to_pdf(input, output)

print("Build done.")