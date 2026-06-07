try:
    
    try:
        print(5, end="")
        print(9!=8, end="")
        print(1, end="")
    except BaseException: 
        print(7, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(8, end="")
    finally:
        print(4, end="")
    
except: print('error')
