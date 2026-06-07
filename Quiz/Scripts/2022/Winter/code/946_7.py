try:
    
    try:
        print(3, end="")
        print(int(0//0.0), end="")
        print(2, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
