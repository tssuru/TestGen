try:
    
    try:
        print(0, end="")
        print(int(3%0), end="")
        print(5, end="")
    except BaseException: 
        print(8, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(9, end="")
    finally:
        print(1, end="")
    
except: print('error')
