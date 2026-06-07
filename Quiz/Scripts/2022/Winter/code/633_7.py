try:
    
    try:
        print(7, end="")
        print(8<=9, end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
