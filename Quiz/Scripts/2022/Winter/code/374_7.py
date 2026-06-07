try:
    
    try:
        print(2, end="")
        print(int("c1"), end="")
        print(0, end="")
    except ValueError: 
        print(7, end="")
    except ZeroDivisionError: 
        print(8, end="")
    else:
        print(5, end="")
    finally:
        print(3, end="")
    
except: print('error')
