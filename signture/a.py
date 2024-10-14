import os
from reportlab.lib.pagesizes import letter
from reportlab.pdfgen import canvas
from PyPDF2 import PdfWriter, PdfReader
from reportlab.pdfgen import canvas
from reportlab.lib.pagesizes import letter
from io import BytesIO
from PIL import Image, ImageDraw, ImageFont

def create_pdf(file_name):
  c = canvas.Canvas(file_name, pagesize=letter)
  c.drawString(100, 750, "Họ và Tên: Nguyễn Anh Quân")
  c.drawString(100, 730, "Tuổi: 30")  # Ví dụ
  c.save()

def add_signature_to_pdf(input_pdf, output_pdf, signature_text):
  # Tạo chữ ký bằng Pillow
  img = Image.new('RGB', (300, 50), color=(255, 255, 255))
  d = ImageDraw.Draw(img)
  font = ImageFont.load_default()
  d.text((10, 10), signature_text, font=font, fill=(0, 0, 0))

  # Lưu chữ ký thành tạm file hình ảnh
  signature_img_path = "signature.png"
  img.save(signature_img_path)

  # Đọc PDF gốc
  pdf_writer = PdfWriter()
  pdf_reader = PdfReader(input_pdf)
  page = pdf_reader.pages[0]

  # Tạo một canvas tạm để thêm chữ ký
  packet = BytesIO()
  can = canvas.Canvas(packet, pagesize=letter)
  can.drawImage(signature_img_path, 100, 100, 200, 50)  # Chèn chữ ký vào vị trí (100,100)
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

# Tạo file PDF
# create_pdf("info.pdf")

# Thêm chữ ký vào file PDF
signatureText = "Nguyễn Anh Quan"
add_signature_to_pdf("info.pdf", "signed_info.pdf", signatureText)
