try:
    
    try:
        print(2, end="")
        print(0>=4, end="")
        print(6, end="")
    except TypeError: 
        print(4, end="")
    except ZeroDivisionError: 
        print(1, end="")
    else:
        print(8, end="")
    finally:
        print(5, end="")
    
except: print('error')
