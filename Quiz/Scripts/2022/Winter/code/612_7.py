try:
    
    try:
        print(9, end="")
        print(6==2, end="")
        print(1, end="")
    except TypeError: 
        print(3, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(2, end="")
    finally:
        print(9, end="")
    
except: print('error')
