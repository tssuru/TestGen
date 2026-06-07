try:
    
    try:
        print(5, end="")
        print(int(7%3), end="")
        print(8, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
