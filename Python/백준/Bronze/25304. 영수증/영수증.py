input_total_price = int(input())
item_numbers = int(input())
item_list = []
calculated_total_price = 0

for _ in range(item_numbers):
    item_and_numbers = []
    item_and_numbers = list(map(int, input().split()))
    item_list.append(item_and_numbers)

for i in range(len(item_list)):
    calculated_total_price += item_list[i][0] * item_list[i][1]

if input_total_price == calculated_total_price:
    print("Yes")

else:
    print("No")