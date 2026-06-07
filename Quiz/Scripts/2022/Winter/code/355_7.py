try:
    
    try:
        print(6, end="")
        print(int(0/0.0), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(9, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
