try:
    
    try:
        print(0, end="")
        print(int(4/3), end="")
        print(2, end="")
    except BaseException: 
        print(8, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
