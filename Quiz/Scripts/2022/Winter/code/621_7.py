try:
    
    try:
        print(2, end="")
        print(int(4//0), end="")
        print(8, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(6, end="")
    
except: print('error')
