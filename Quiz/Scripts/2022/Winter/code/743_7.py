try:
    
    try:
        print(3, end="")
        print(int(8/0), end="")
        print(9, end="")
    except TypeError: 
        print(2, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(8, end="")
    
except: print('error')
