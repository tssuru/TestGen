try:
    
    try:
        print(8, end="")
        print(int(5/0.0), end="")
        print(3, end="")
    except BaseException: 
        print(2, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
