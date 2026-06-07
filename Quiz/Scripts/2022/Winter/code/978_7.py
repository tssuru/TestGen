try:
    
    try:
        print(9, end="")
        print(int(4/0), end="")
        print(9, end="")
    except BaseException: 
        print(3, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(8, end="")
    finally:
        print(6, end="")
    
except: print('error')
