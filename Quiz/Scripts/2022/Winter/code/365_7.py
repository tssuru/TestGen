try:
    
    try:
        print(6, end="")
        print(4<=3, end="")
        print(0, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(1, end="")
    else:
        print(2, end="")
    finally:
        print(7, end="")
    
except: print('error')
