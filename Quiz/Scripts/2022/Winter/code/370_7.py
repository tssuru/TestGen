try:
    
    try:
        print(8, end="")
        print(5>1, end="")
        print(0, end="")
    except ValueError: 
        print(2, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(4, end="")
    finally:
        print(7, end="")
    
except: print('error')
