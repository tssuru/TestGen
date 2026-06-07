try:
    
    try:
        print(3, end="")
        print(int(4/0), end="")
        print(6, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except TypeError: 
        print(9, end="")
    else:
        print(1, end="")
    finally:
        print(2, end="")
    
except: print('error')
