try:
    
    try:
        print(6, end="")
        print(int(9//1), end="")
        print(4, end="")
    except ValueError: 
        print(2, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(5, end="")
    finally:
        print(1, end="")
    
except: print('error')
