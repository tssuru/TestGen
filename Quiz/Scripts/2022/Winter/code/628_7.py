try:
    
    try:
        print(1, end="")
        print(int("1"), end="")
        print(8, end="")
    except ZeroDivisionError: 
        print(3, end="")
    except ValueError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(2, end="")
    
except: print('error')
