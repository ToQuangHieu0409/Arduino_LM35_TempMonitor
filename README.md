"# Arduino LM35 Temperature Monitor"

# Dự án: Arduino LM35 Temperature Monitor

## 1. Mô tả

Hệ thống này được thiết kế để giám sát nhiệt độ môi trường thông qua cảm biến LM35 và bo mạch Arduino. Dữ liệu từ các cảm biến analog được xử lý, chuyển đổi sang độ C và truyền lên máy tính thông qua giao diện Serial với định dạng JSON để phục vụ việc hiển thị đồ thị thời gian thực.

## 2. Tính năng

- Hỗ trợ đọc dữ liệu đồng thời từ 3 kênh cảm biến (A0, A1, A2).
- Chuyển đổi chính xác giá trị ADC 10-bit sang đơn vị nhiệt độ Celsius.
- Định dạng dữ liệu đầu ra JSON giúp dễ dàng tích hợp với các ứng dụng máy tính.
- Quản lý phiên bản chặt chẽ bằng Git và GitHub

## 3. Phần cứng cần thiết

| STT | Tên linh kiện    | Số lượng | Ghi chú                          |
| --- | ---------------- | -------- | -------------------------------- |
| 1   | Arduino UNO R3   | 1        | Bo mạch điều khiển chính         |
| 2   | Cảm biến LM35    | 3        | Cảm biến nhiệt độ analog         |
| 3   | Breadboard       | 1        | Bo cắm thử nghiệm mạch           |
| 4   | Dây cắm (Jumper) | 1 bộ     | Kết nối các thành phần phần cứng |

## 4. Cách sử dụng

1. Mở mã nguồn trong thư mục `firmware/LM35_TempReader/LM35_TempReader.ino` bằng Arduino IDE
2. Kết nối Arduino UNO với máy tính qua cáp USB
3. Chọn đúng Board và Cổng Serial (Port) trong menu Tools
4. Nhấn nút **Upload** để nạp chương trình xuống bo mạch
5. Mở **Serial Monitor** với tốc độ Baudrate 9600 để quan sát dữ liệu nhiệt độ trả về

## 5. Cấu trúc thư mục

```text
Arduino_LM35_TempMonitor/
├── firmware/
│   └── LM35_TempReader/
│       └── LM35_TempReader.ino   # Mã nguồn nạp cho Arduino
├── pc_app/                       # Ứng dụng hiển thị trên máy tính (C#)
├── docs/                         # Tài liệu kỹ thuật và Datasheet
├── simulation/                   # File mô phỏng mạch trên Proteus
├── .gitignore                    # Cấu hình loại trừ file rác
└── README.md                     # Tài liệu giới thiệu dự án
```

## 6. Thành viên nhóm

Tô Quang Hiếu - MSSV: N23DCCI023 (Chủ Repository)
Lê Thanh Tú - MSSV: N23DCCI075 (Collaborator)

## 7. Tac gia

Tô Quang Hiếu(https://toquanghieu0409.github.io./) - Sinh vien PTIT
