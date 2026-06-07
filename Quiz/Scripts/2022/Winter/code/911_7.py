try:
    
    try:
        print(1, end="")
        print(int(6//3), end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(3, end="")
    finally:
        print(9, end="")
    
except: print('error')
