try:
    
    try:
        print(3, end="")
        print(int(8%1), end="")
        print(0, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(4, end="")
    
except: print('error')
