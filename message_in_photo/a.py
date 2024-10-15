import os
from cryptosteganography import CryptoSteganography

os.system("cls")

path_cur = os.path.abspath(os.path.dirname(__file__))
path = os.path.join(path_cur, "avt.jpg")
path1 = os.path.join(path_cur, "avt1.jpg")

# Tạo đối tượng mã hóa với khóa
crypto_steganography = CryptoSteganography('secret-key')

# Mã hóa một thông điệp vào ảnh
message = "anh quan"
crypto_steganography.hide(path, path1, message)
print(f"Đã giấu thông điệp: {message}")

# Giải mã thông điệp từ ảnh
secret_message = crypto_steganography.retrieve(path1)
print(f"Giãi mã thông điệp: {secret_message}")