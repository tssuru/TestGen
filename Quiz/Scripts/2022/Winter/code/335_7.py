try:
    
    try:
        print(4, end="")
        print(int(0//0), end="")
        print(5, end="")
    except ValueError: 
        print(6, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
