import os
from cryptosteganography import CryptoSteganography

os.system("cls")  # Assuming you're clearing the console, adjust for your environment

path_cur = os.path.abspath(os.path.dirname(__file__))
path = os.path.join(path_cur, "avt.jpg")
path1 = os.path.join(path_cur, "avt1.jpg")

try:
    # Create a CryptoSteganography object with a secret key
    crypto_steganography = CryptoSteganography('secret-key')

    # Hide a message in the image
    message = "anh quan"
    crypto_steganography.hide(path, path1, message)
    print(f"Successfully hidden message: {message}")

    # Retrieve the hidden message from the image
    secret_message = crypto_steganography.retrieve(path1)
    print(f"Successfully retrieved message: {secret_message}")

except Exception as e:
    print(f"Error: {e}")
