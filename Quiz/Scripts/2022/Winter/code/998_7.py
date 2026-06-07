try:
    
    try:
        print(1, end="")
        print(int("8"), end="")
        print(2, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(0, end="")
    else:
        print(6, end="")
    finally:
        print(4, end="")
    
except: print('error')
