try:
    
    try:
        print(8, end="")
        print(int(7%2), end="")
        print(6, end="")
    except BaseException: 
        print(7, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
