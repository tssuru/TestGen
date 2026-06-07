try:
    
    try:
        print(5, end="")
        print(3==8, end="")
        print(7, end="")
    except ValueError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(9, end="")
    finally:
        print(2, end="")
    
except: print('error')
