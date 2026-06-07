try:
    
    try:
        print(9, end="")
        print(int("c1"), end="")
        print(0, end="")
    except TypeError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(3, end="")
    finally:
        print(6, end="")
    
except: print('error')
