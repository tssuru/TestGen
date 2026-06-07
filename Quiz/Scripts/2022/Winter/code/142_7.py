try:
    
    try:
        print(5, end="")
        print(4==4, end="")
        print(2, end="")
    except ValueError: 
        print(9, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(7, end="")
    finally:
        print(5, end="")
    
except: print('error')
