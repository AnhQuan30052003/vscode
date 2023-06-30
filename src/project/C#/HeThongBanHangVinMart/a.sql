create database Vinmart
use Vinmart

use master
drop database Vinmart

-- Nhà cung cấp
create table NhaCungCap (
	maNCC varchar(10) primary key,
	tenCT nvarchar(50) not null,
	diaChi nvarchar(100) not null,
	soDT varchar(20) not null,
	fax varchar(20) not null,
	email varchar(50) not null,
)

-- Nhân viên
create table NhanVien (
	maNV varchar(10) primary key,
	hoDem nvarchar(30) not null,
	ten nvarchar(20) not null,
	gioiTinh bit not null,
	ngaySinh date null,
	chungMinhThu varchar(20) not null,
	soDT varchar(20) not null,
	diaChi nvarchar(100) not null,
	viTriCongviec nvarchar(50) not null,
	ngayBatDauLam datetime not null,
	luong money not null,
	matKhau varchar(20) not null,
)

-- Khách hàng
create table KhachHang (
	maKH varchar(10) primary key,
	hoDem nvarchar(30) not null,
	ten nvarchar(20) not null,
	soDT varchar(20),
	diemTichLuy int not null
)

-- Loại hàng
create table LoaiHang (
	maLH varchar(10) primary key,
	tenLH nvarchar(100) not null,
)

-- Mặt hàng
create table MatHang (
	maMH varchar(10) primary key,
	tenMH nvarchar(100) not null,
	maLH varchar(10) foreign key references LoaiHang(maLH),
	soLuongHang int not null,
	donViTinh nvarchar(20) not null,
	giaBan money not null
)

-- Hóa đơn
create table HoaDon (
	soHD varchar(10) primary key,
	ngayLapHD datetime not null,
	maNV varchar(10) foreign key references NhanVien(maNV),
	maKH varchar(10) foreign key references KhachHang(maKH),
	uuDai decimal(2,2) null,
)

-- Chi tiết hóa đơn
create table ChiTietHoaDon (
	soHD varchar(10) foreign key references HoaDon(soHD),
	maMH varchar(10) foreign key references MatHang(maMH),
	soLuongMua int not null,
	mucKhuyenMai decimal(2,2) not null,
	primary key (soHD, maMH)
)

-- Phiếu nhập
create table PhieuNhap (
	maPN varchar(10) primary key,
	ngayLapPhieu datetime not null,
	maNV varchar(10) foreign key references NhanVien(maNV),
	maNCC varchar(10) foreign key references NhaCungCap(maNCC)
)

-- Chi tiết phiếu nhập
create table ChiTietPhieuNhap (
	maPN varchar(10) foreign key references PhieuNhap(maPN),
	maMH varchar(10) foreign key references MatHang(maMH),
	soLuongNhap int not null,
	giaNhap money not null,
	primary key (maPN, maMH)
)

-- Phiếu xuất
create table PhieuXuat (
	maPX varchar(10) primary key,
	ngayLapPhieu datetime not null,
	maNCC varchar(10) foreign key references NhaCungCap(maNCC)
)

-- Chi tiết phiếu nhập
create table ChiTietPhieuXuat (
	maPX varchar(10) foreign key references PhieuXuat(maPX),
	maMH varchar(10) foreign key references MatHang(maMH),
	soLuongTra int not null,
	primary key (maPX)
)