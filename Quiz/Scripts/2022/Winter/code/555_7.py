try:
    
    try:
        print(7, end="")
        print(3!=7, end="")
        print(0, end="")
    except ValueError: 
        print(1, end="")
    except ZeroDivisionError: 
        print(6, end="")
    else:
        print(3, end="")
    finally:
        print(2, end="")
    
except: print('error')
