try:
    
    try:
        print(7, end="")
        print(int(6//1), end="")
        print(5, end="")
    except ZeroDivisionError: 
        print(8, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
