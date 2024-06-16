# รับข้อมูลเข้า
hour_in = int(input("ชั่วโมงเข้า: "))
minute_in = int(input("นาทีเข้า: "))

# รับข้อมูลออก
hour_out = int(input("ชั่วโมงออก: "))
minute_out = int(input("นาทีออก: "))

# คำนวณเวลาที่จอดรถ
total_hours = hour_out - hour_in
total_minutes = minute_out - minute_in

# คำนวณค่าที่จอดรถ
if total_hours == 0 and total_minutes <= 15:
    print("ไม่คิดค่าบริการ")
elif 0 < total_hours <= 3:
    total_cost = total_hours * 20
    print("ค่าบริการที่จอดรถ:", total_cost, "บาท")
elif 3 < total_hours <= 8:
    total_cost = 60 + ((total_hours - 3) * 40)
    print("ค่าบริการที่จอดรถ:", total_cost, "บาท")
else:
    print("ค่าบริการที่จอดรถ: 400 บาท (เหมาจ่าย)")
