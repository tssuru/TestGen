try:
    
    try:
        print(8, end="")
        print(2>=8, end="")
        print(9, end="")
    except ZeroDivisionError: 
        print(5, end="")
    except BaseException: 
        print(1, end="")
    else:
        print(4, end="")
    finally:
        print(6, end="")
    
except: print('error')
