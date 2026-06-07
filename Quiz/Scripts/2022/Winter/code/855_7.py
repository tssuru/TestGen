try:
    
    try:
        print(4, end="")
        print(int("c1"), end="")
        print(1, end="")
    except ZeroDivisionError: 
        print(9, end="")
    except ValueError: 
        print(7, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
