try:
    
    try:
        print(1, end="")
        print(3==8, end="")
        print(4, end="")
    except BaseException: 
        print(2, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(5, end="")
    finally:
        print(8, end="")
    
except: print('error')
