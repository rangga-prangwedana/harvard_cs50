def main():
    time = input("What time is it? ")
    time_float = convert(time)
    
    if 7 <= time_float <= 8:
        print("breakfast time")
    elif 12 <= time_float <= 13:
        print("lunch time")
    elif 18 <= time_float <= 19:
        print("dinner time")


def convert(time):
    time_string = time.replace(":", " ").split()
    add_on = 0
    
    if len(time_string) == 3:
        if time_string[2].lower() == "p.m.":
            add_on = 12
    
    time_float = float(time_string[0]) + float(time_string[1]) / 60 + add_on

    return time_float

if __name__ == "__main__":
    main()
