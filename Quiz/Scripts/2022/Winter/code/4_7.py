try:
    
    try:
        print(9, end="")
        print(1!=1, end="")
        print(3, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(5, end="")
    
except: print('error')
