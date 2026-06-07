try:
    
    try:
        print(1, end="")
        print(9!=8, end="")
        print(4, end="")
    except BaseException: 
        print(6, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(8, end="")
    
except: print('error')
