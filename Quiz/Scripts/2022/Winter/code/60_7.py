try:
    
    try:
        print(0, end="")
        print(int(8%1), end="")
        print(7, end="")
    except TypeError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(4, end="")
    finally:
        print(3, end="")
    
except: print('error')
