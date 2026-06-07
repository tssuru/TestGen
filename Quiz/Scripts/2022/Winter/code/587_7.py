try:
    
    try:
        print(7, end="")
        print(4>=1, end="")
        print(2, end="")
    except ValueError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(3, end="")
    finally:
        print(1, end="")
    
except: print('error')
