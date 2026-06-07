try:
    
    try:
        print(0, end="")
        print(int(8//0.0), end="")
        print(2, end="")
    except BaseException: 
        print(7, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
