try:
    
    try:
        print(8, end="")
        print(4<=9, end="")
        print(5, end="")
    except TypeError: 
        print(0, end="")
    except ZeroDivisionError: 
        print(9, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
