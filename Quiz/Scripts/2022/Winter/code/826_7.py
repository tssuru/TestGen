try:
    
    try:
        print(8, end="")
        print(int(5//2), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
