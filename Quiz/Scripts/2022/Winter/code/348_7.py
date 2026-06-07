try:
    
    try:
        print(8, end="")
        print(int("a0"), end="")
        print(8, end="")
    except ValueError: 
        print(5, end="")
    except ZeroDivisionError: 
        print(2, end="")
    else:
        print(1, end="")
    finally:
        print(3, end="")
    
except: print('error')
