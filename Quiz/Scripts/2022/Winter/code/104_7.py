try:
    
    try:
        print(8, end="")
        print(int(3%3), end="")
        print(0, end="")
    except BaseException: 
        print(6, end="")
    except ZeroDivisionError: 
        print(4, end="")
    else:
        print(7, end="")
    finally:
        print(2, end="")
    
except: print('error')
