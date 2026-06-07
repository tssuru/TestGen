try:
    
    try:
        print(6, end="")
        print(8>=6, end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except TypeError: 
        print(5, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
