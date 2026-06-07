try:
    
    try:
        print(4, end="")
        print(int(0/0), end="")
        print(5, end="")
    except TypeError: 
        print(9, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(3, end="")
    finally:
        print(8, end="")
    
except: print('error')
