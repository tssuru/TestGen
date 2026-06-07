try:
    
    try:
        print(7, end="")
        print(4<=1, end="")
        print(3, end="")
    except ValueError: 
        print(9, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(5, end="")
    finally:
        print(6, end="")
    
except: print('error')
