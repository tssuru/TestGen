try:
    
    try:
        print(8, end="")
        print(int(1//0), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except ValueError: 
        print(4, end="")
    else:
        print(2, end="")
    finally:
        print(3, end="")
    
except: print('error')
