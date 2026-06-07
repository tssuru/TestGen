try:
    
    try:
        print(1, end="")
        print(int(3%3), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
