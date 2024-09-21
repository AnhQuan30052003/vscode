import os, sys

os.system("cls")

if len(sys.argv) > 1:
    parameter = sys.argv[1]
    print(f"Đã nhận tham số từ bên ngoài: {parameter}")
else:
    print("Không có tham số được truyền vào.")
