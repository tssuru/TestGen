try:
    
    try:
        print(9, end="")
        print(2<8, end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(2, end="")
    except BaseException: 
        print(4, end="")
    else:
        print(0, end="")
    finally:
        print(1, end="")
    
except: print('error')
