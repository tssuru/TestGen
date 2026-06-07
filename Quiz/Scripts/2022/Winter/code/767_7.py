try:
    
    try:
        print(0, end="")
        print(int(2//1), end="")
        print(7, end="")
    except BaseException: 
        print(5, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(1, end="")
    finally:
        print(4, end="")
    
except: print('error')
