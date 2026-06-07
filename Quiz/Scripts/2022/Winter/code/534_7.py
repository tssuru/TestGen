try:
    
    try:
        print(5, end="")
        print(3!=2, end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(6, end="")
    except ValueError: 
        print(8, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
